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
  template <typename T> //  Template functions should have their definition in the hpp
  bool is_singleton(std::function<T* ()> factory) {
	  T* obj1 = factory();
	  T* obj2 = factory();
	  if (obj1 == obj2)  // Comparing the addresses
		  return true;
	  return false;
  }
};

#endif // SINGLETON_HPP