#include "Renderer.hpp"

std::string VectorRenderer::render_triangle(std::string name) const {
    return "Drawing " + name + " as lines";
}

std::string VectorRenderer::render_square(std::string name) const {
    return "Drawing " + name + " as lines";
}

std::string RasterRenderer::render_triangle(std::string name) const {
    return "Drawing " + name + " as pixels";
}

std::string RasterRenderer::render_square(std::string name) const {
    return "Drawing " + name + " as pixels";
}