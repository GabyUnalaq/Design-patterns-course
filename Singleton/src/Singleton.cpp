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

// Singleton Tester
template <typename T>
bool SingletonTester::is_singleton(std::function<T* ()> factory)
{
    T* obj1 = factory();
    T* obj2 = factory();
    if (obj1 == obj2)  // Comparing the addresses
        return true;
    return false;
}