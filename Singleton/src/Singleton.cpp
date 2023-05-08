#include "Singleton.hpp"

// Singleton factory
Example* SingletonFactory::get() {
    static Example e{};
    return &e;
};

// Not a singleton factory
Example* NotSingletonFactory::get() {
    return new Example{};
};