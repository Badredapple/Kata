#include <iostream>
#include <utility>

class Move{
};

void g (Move&) {
	std::cout<< "g() for varable\n";
}

void g (Move const&) {
	std::cout<< "g() for constant\n";
}

void g (Move&&) {
	std::cout<< "g() for moveable object\n";
}

// let f() forward argument val to g()
template<typename T>
void f(T&& val)
{
	g(std::forward<T>(val));
}
