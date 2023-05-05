#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <iostream>
#include <functional>

class Example  {
private:
	// To have access to private constructors
	friend class SingletonFactory;
	friend class NotSingletonFactory;

private:
	Example() = default;

	Example(Example const&) = delete; // Copy contructor
	void operator=(Example const&) = delete; // Assignment operator

	virtual ~Example() = default;
};

// Singleton factory
class SingletonFactory {
public:
	static Example* get();
};

// Not a singleton factory
class NotSingletonFactory {
public:
	static Example* get();
};

// Singleton Tester
struct SingletonTester {
  template <typename T>
  bool is_singleton(std::function<T* ()> factory);
};

#endif // SINGLETON_HPP