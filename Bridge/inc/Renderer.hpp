#ifndef RENDERER_HPP
#define RENDERER_HPP

#include <string>

class Renderer {
public:
    virtual std::string render_triangle(std::string name) const = 0;
    virtual std::string render_square(std::string name) const = 0;
};

class VectorRenderer : public Renderer {
public:
    std::string render_triangle(std::string name) const override;
    std::string render_square(std::string name) const override;
};

class RasterRenderer : public Renderer {
public:
    std::string render_triangle(std::string name) const override;
    std::string render_square(std::string name) const override;
};

#endif // RENDERER_HPP