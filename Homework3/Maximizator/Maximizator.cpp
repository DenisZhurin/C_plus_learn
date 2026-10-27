/*
Тренировочное задание по программированию : Максимизатор
Напишите функцию UpdateIfGreater, которая принимает два целочисленных аргумента : first и second.
Если first оказался больше second, Ваша функция должна записывать в second значение параметра first.
При этом изменение параметра second должно быть видно на вызывающей стороне.

Пример
int a = 4;
int b = 2;
UpdateIfGreater(a, b);
b должно стать равно 4
*/

#include <iostream>
#include <windows.h>

int UpdateIfGreater(int first, int second) {

	if (first > second) {
		second = first;
	}
		return second;
}


int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int f;
	int s;

	std::cout << "Введите значение переменной first: ";
	std::cin >> f;

	std::cout << "\nВведите значение переменной second: ";
	std::cin >> s;

	UpdateIfGreater(f, s);
	int value = UpdateIfGreater(f, s);


	std::cout << "\nИзмененная переменная second: " << value << std::endl;

	return 0;
}