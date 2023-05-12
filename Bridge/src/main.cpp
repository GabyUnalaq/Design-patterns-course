#include <iostream>

#include "Renderer.hpp"
#include "Shape.hpp"


int main() {
	std::cout << Triangle(RasterRenderer()).str() << std::endl;

	VectorRenderer rr{};
	Square square{ rr };
	std::cout << square.str() << std::endl;
}
