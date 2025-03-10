#ifndef RENDERER_OPENGL_H
#define RENDERER_OPENGL_H

#include "renderer.h"
#include <SDL2/SDL.h>
#include <OpenGL/gl3.h> // Use OpenGL 3.2+ for macOS compatibility

class RendererOpenGL : public Renderer
{
public:
    RendererOpenGL();
    ~RendererOpenGL() override;
    bool initialize(int width, int height) override;
    void clear() override;
    void render() override;
    void shutdown() override;
    void loadSprite(const char *filepath) override;

private:
    SDL_Window *window;
    SDL_GLContext glContext;
    GLuint shaderProgram;
    GLuint vao, vbo, texture;
    int spriteWidth, spriteHeight;
};

#endif