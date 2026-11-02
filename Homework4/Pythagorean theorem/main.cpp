/*
Задание по программированию : Уравнение
На вход вашей программе в стандартном вводе даны действительные коэффициенты A, B и C уравнения Ax² + Bx + C = 0. 
Выведите все его различные действительные корни в любом порядке.Гарантируется, что хотя бы один из коэффициентов не равен нулю.
_______________________
|stdin   |	stdout    |
|--------|------------|
|2 5 2   |  - 0.5 - 2 |
|2 4 2   |  - 1       |
|2 1 2   |            |
|0 4 10  |  - 2.5     |
-----------------------
Подсказка
Для вычисления квадратного корня используйте функцию sqrt из библиотеки cmath.
Чтобы подключить библиотеку, в начале программы напишите

#include <cmath>
*/
#include <Windows.h>
#include <iostream>
#include <cmath>

struct OutX {
	double x1, x2;
};

OutX FindX(double& d, double a, double b,double c) {

	OutX find;

	if (d > 0) {
		find.x1 = (-b + std::sqrt(d)) / (2 * a);
		find.x2 = (-b - sqrt(d)) / (2 * a);
		std::cout << "X1 = " << find.x1 << "\n"
			<< "X2 = " << find.x2 << "\n";
	}
	else if (d == 0) {
		find.x1 = -(b / (2 * a));
		std::cout << "X = " << find.x1 << "\n";
	}
	else {
		std::cout << "Ошибка! Дискриминант меньше нуля! Действительных корней нет! \n";
	}

	return find;
}

double FindD(double a, double b, double c) {

	double D = std::pow(b, 2) - (4 * a * c);
	std::cout << "Вычисление дискриминанта D = b^2 - 4AC = " << D << "\n";

	return D;
}

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	double A, B, C;

	std::cout << "Дано квадратное уравнение: Ax^2 + Bx + C = 0 \n";
	std::cout << "Введите коэффициенты A,B, C" << "\n";	
	std::cin >> A >> B >> C;	

	double out_D = FindD(A,B,C);
	FindX(out_D,A,B,C);

	return 0;
}