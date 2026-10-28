/*
Задание по программированию : Перемещение строк
Напишите функцию MoveStrings, которая принимает два вектора строк, source и destination, и дописывает все строки из первого вектора в конец второго.После выполнения функции вектор source должен оказаться пустым.

Чтобы очистить содержимое вектора, надо вызвать у него метод clear :

vector<string> words = { "hey", "hi" };
words.clear();
// Теперь вектор words пуст

Пример
vector<string> source = { "a", "b", "c" };
vector<string> destination = { "z" };
MoveStrings(source, destination);
- source должен оказаться пустым
- destination должен содержать строки "z", "a", "b", "c" именно в таком порядке
*/

#include <windows.h>
#include <iostream>
#include <vector>
#include <string>

void MoveStrings(std::vector<std::string>& source, std::vector<std::string>& destination) {

	std::cout << "Вектор source до перемещения: ";
	for (auto i : source) {
		std::cout << i << " ";
	}
	std::cout << std::endl;

	std::cout << "Вектор destination до перемещения : ";
	for (auto q : destination) {
		std::cout << q << " ";
	}
	std::cout << std::endl;

	for (auto k = 0; k < source.size(); k++) {
		std::string tmp = source[k];
		destination.push_back(tmp);
	}
	source.clear();
}

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	std::vector<std::string> source = { "a","b","c" };
	std::vector<std::string> destination = { "z" };
	MoveStrings(source, destination);

	std::cout << "\nВектор source после перемещения: ";
	for (auto i : source) {
		std::cout << i << " ";
	}
	std::cout << std::endl;

	std::cout << "Вектор destination после перемещения : ";
	for (auto q : destination) {
		std::cout << q << " ";
	}
	std::cout << std::endl;
	
	return 0;
}