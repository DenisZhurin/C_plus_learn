/*
Задание по программированию : Минимальная строка
В стандартном потоке даны три строки, разделённые пробелом.Каждая строка состоит из строчных латинских букв и имеет длину не более 30 символов.
Выведите в стандартный вывод лексикографически минимальную из них.

 
|    stdin	          |stdout    |
|--------------------------------|
|milk milkshake month |	  milk   |
|     c a b	          |    a     |
| fire fog wood	      |   fire   |
*/

#include <iostream>
#include <string>
#include <Windows.h>

std::string MinString(std::string& a, std::string& b, std::string& c) {
	
	if (a <= b && a <= c) {
		return a;
	}
	else if (b <= a && b <= c) {
		return b;
	}
	else {
		return c;
	}
}

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	std::string str1, str2, str3;

	std::cout << "Введите три слова в строку: " << "\n";
	std::cin >> str1;
	std::cin >> str2;
	std::cin >> str3;

	std::cout << MinString(str1, str2, str3) << std::endl; 

	return 0;
}

