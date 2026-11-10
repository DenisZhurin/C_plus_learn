/*
Тренировочное задание по программированию : Часть вектора
Напишите функцию PrintVectorPart, принимающую вектор целых чисел numbers,
выполняющую поиск первого отрицательного числа в нём и выводящую в стандартный вывод все числа,
расположенные левее найденного, в обратном порядке.
Если вектор не содержит отрицательных чисел, выведите все числа в обратном порядке.

Вывод
8 1 6
4 5 8 1 6
*/

#include <iostream>
#include <vector>

void PrintVectorPart(const std::vector<int>& numbers) {
	int temp = 0;
	bool flag = false;
	for (int i = 0; i < numbers.size(); ++i) {
		if (numbers[i] < 0) {
			temp = i;
			flag = true;
			for (int j = temp - 1; j >= 0; --j) {
				std::cout << numbers[j] << " ";
			}
			break;
		}
	}
	std::cout << std::endl;
	if (!flag) {
		for (int k = numbers.size() - 1; k >= 0; --k) {
			std::cout << numbers[k] << " ";
		}
	}
}


int main() {

	PrintVectorPart({ 6, 1, 8, -5, 4 });
	PrintVectorPart({ -6, 1, 8, -5, 4 });  // ничего не выведется
	PrintVectorPart({ 6, 1, 8, 5, 4 });
	return 0;
}