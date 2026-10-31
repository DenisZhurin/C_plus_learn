/*Задание по программированию : Второе вхождение
Дана строка.Найдите в этой строке второе вхождение буквы f и выведите индекс этого вхождения.
Если буква f в данной строке встречается только один раз, выведите число - 1, а если не встречается ни разу, выведите число - 2. Индексы нумеруются с нуля.

|stdin  |  stdout |
|-------|---------|                 
|comfort|   -1    |
|coffee	|    3    |
|car    |   -2    |

*/

#include <iostream>
#include <string>
#include <Windows.h>

int SecondCIN(const std::string& a) {
    
    const char letter = 'f';
    int count = 0; 

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == letter) {
            count++; 

            if (count == 2) {
                return i; 
            }
        }
    }

    if (count == 1) {
        return -1; 
    }
    else {
        return -2; 
    }
}

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	std::cout << "Введите слово: ";
	std::string str;
	std::cin >> str;

	std::cout << SecondCIN(str) << "\n";

	return 0;
}

