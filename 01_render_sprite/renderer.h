#ifndef RENDERER_H
#define RENDERER_H

class Renderer
{
public:
    virtual ~Renderer() {}
    virtual bool initialize(int width, int height) = 0;
    virtual void clear() = 0;
    virtual void render() = 0;
    virtual void shutdown() = 0;
    virtual void loadSprite(const char *filepath) = 0;
};

Renderer *createRenderer(); // Factory function

#endif