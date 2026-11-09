/*
Тренировочное задание по программированию: Средняя температура
Даны значения температуры, наблюдавшиеся в течение N подряд идущих дней. 
Найдите номера дней (в нумерации с нуля) со значением температуры выше среднего арифметического за все N дней.

Гарантируется, что среднее арифметическое значений температуры является целым числом.

Формат ввода
Вводится число N, затем N неотрицательных целых чисел — значения температуры в 0-й, 1-й, ... (N−1)-й день.

Формат вывода
Первое число K — количество дней, значение температуры в которых выше среднего арифметического. Затем K целых чисел — номера этих дней.

Пример
Ввод
5
7 6 3 0 9
Вывод
3
0 1 4
*/

#include <Windows.h>
#include <iostream>
#include <vector>

double InputData(double day, double temp, double sum, std::vector<double>& vec) {

    std::cout << "Введите кол-во дней: ";
    std::cin >> day;
    std::cout << "\nВведите температуру: ";

    for(int i=0; i < day; ++i){
        std::cin >> temp;
        vec.push_back(temp);
        sum = sum + vec[i]; //sum += vec[i]
    }
    double avg = sum / vec.size(); // Вычисляем среднее

    return avg;
}

std::vector<int> FindHotDays(const std::vector<double>& vec, double avg) {
    std::vector<int> above_avg_indices; // Вектор для хранения индексов

    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] > avg) {
            above_avg_indices.push_back(i); // Запоминаем индекс дня
        }
    }
    return above_avg_indices;
}

main() {
    SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

    double day;
    double temp;
    double sum = 0;
    std::vector<double> vec;
    
    double avg = InputData(day, temp, sum, vec);
    std::vector<int> result_days = FindHotDays(vec, avg);

     for (int i = 0; i < result_days.size(); ++i) {
        std::cout << "Индексы дней: " << result_days[i] << " ";
    }
    std::cout << "\n";

    return 0;

}