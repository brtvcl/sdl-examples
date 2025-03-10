#include "renderer.h"
#include <SDL2/SDL.h>
#include <iostream>

int main()
{
    Renderer *renderer = createRenderer();
    if (!renderer->initialize(800, 600))
    {
        std::cerr << "Renderer initialization failed!" << std::endl;
        return -1;
    }

    try
    {
        renderer->loadSprite("assets/sprite.png");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        renderer->shutdown();
        delete renderer;
        return -1;
    }

    bool running = true;
    SDL_Event event;
    while (running)
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
                running = false;
        }

        renderer->clear();
        renderer->render();
    }

    renderer->shutdown();
    delete renderer;
    return 0;
}