#include <iostream>

int Foo(int a) {
	
	if (a < 1)
		return 0;
	a--;
	std::cout << a << std::endl;
	Foo(a);
}

void main() {

	Foo(5);
}