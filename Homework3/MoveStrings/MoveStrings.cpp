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

#include <iostream>
#include <windows.h>
#include <vector>

void MoveStrings(std::vector<std::string>& source, std::vector<std::string>& destination) {

	std::vector<std::string> source = { "a","b","c" };
	std::vector<std::string> destination = { "z" };

	for (auto i : source) {
		std::cout << "Вектор source до перемещения: " << source << " ";
	}
	std::cout << std::endl;

	for (auto i : source) {
		std::cout << "Вектор destination до перемещения : " << destination << " ";
	}
	std::cout << std::endl;

	for (auto i = 0; i < source.size(); i++) {
		std::string tmp = source[i];
		destination.push_back(tmp);
	}
	source.clear();
}

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	std::vector<std::string> source;
	std::vector<std::string> destination;
	MoveStrings(source, destination);

	for (auto i : source) {
		std::cout << "Вектор source после перемещения: " << source << " ";
	}
	std::cout << std::endl;

	for (auto i : destination) {
		std::cout << "Вектор destination после перемещения : " << destination << " ";
	}
	std::cout << std::endl;
	
	return 0;
}