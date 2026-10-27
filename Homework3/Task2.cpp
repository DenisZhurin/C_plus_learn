/* Тренировочное задание по программированию : Палиндром
Напишите функцию, которая:
- называется IsPalindrom,
- возвращает bool,
- принимает параметр типа string и возвращает, является ли переданная строка палиндромом.

| Аргумент функции|	Результат|
|       madam     |   true   |
|                 |          |
|     gentleman   |   false  |
|_________________|__________|
Палиндром - это слово или фраза, которые одинаково читаются слева направо и справа налево. */

#include <iostream>
#include <vector>
#include <string>

std::string PrintWord(std::vector<char>& vec_char) {
	for (char letter : input_word) {
		vec_char.push_back(letter);
	}
	return vec_char
}

void LeftRead(std::vector<std::string> resived_save_word) {
	std::string result;
	for (int i = 0;i < resived_save_word.size(); ++i) {
		std::cout << "Буква на позиции " << i << ":" << resived_save_word[i] << std::endl;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	std::vector<char> letters;

	std::string input_word;
	std::cout << "Введите слово: ";

	auto save_word = PrintWord(letters);
	LeftRead(save_word);

	return 0;
}



























/*
bool IsPalindrom(int flag) {

	bool result;

	if (flag == 0)
	{
		result = true;
	}
	else
	{
		result = false;
	}

	return result;
}

int InputWord(const std::string &word, std::vector<char>& vec_word) {

	for (char i=0;i < 10;++i)
	{
		char n;
		std::cin >> n;
		vec_word.push_back(n);

		if (vec_word.size() == 2)
		{
			if (vec_word[1] == vec_word[2])
			{
				return 0;
			}
			else
			{
				return -1;
			}
		}
	}
}

int main() {

	setlocale(LC_ALL, "Russian");

	std::string word;
	std::cout << "Введите слово:  ";
	std::cin >> word;
	std::vector<char> letters;
	int palindrom = InputWord(word, letters);
	std::cout << "Полиндром? ----> " << IsPalindrom(palindrom);

	return 0;
}
*/