/*
Напишите функцию, которая: 
- называется Factorial, 
- возвращает int, 
- принимает int и возвращает факториал своего аргумента.Гарантируется, что аргумент функции по модулю не превышает 10.
Для отрицательных аргументов функция должна возвращать 1.

| Аргумент функции|	Результат |
|        1        |    1      |
|       -2        |    1      |
|        4	      |    24     |
|_________________|___________|
Пояснение
В этой задаче на проверку вам надо прислать файл с реализацией функции Factorial.
Этот файл не должен содержать функцию main.Если в нём будет функция main, вы получите ошибку компиляции.
*/

#include <iostream>
#include <vector>

int FactorialCheck(int val) {

    if (val <= 0)
    {
        return 1;
    }
    return val;
}

 std::vector<int> ArrFactorial(int size) {

    std::vector<int> arr;
    for (int i = 1;i <= size; ++i)
    {
       arr.push_back(i);
    }

    return arr;
}

int Factorial(const std::vector<int>& factorial_value, int n) {

    int result = 1;
    for (int i = 1;i <= n;++i) 
    {
        result *= i;
    }
    
    return result;
}
/*
int main()
{
    setlocale(LC_ALL, "Russian");
    
    int value;
    std::cout << "Введите целое неотрицательное число: ";
    std::cin >> value;

    FactorialCheck(value);
    auto save_arr = ArrFactorial(value);
    std::cout << "\nФакториал " << value << " = " << Factorial(save_arr, value) << "\n";

    return 0;
}
*/