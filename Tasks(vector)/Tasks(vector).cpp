/* 
Этап 1. Разминка: ввод - вывод и управление потоком

Меню в консоли(switch, цикл while).

Команды : добавить задачу, показать список, удалить по индексу, выход.

Хранение — std::vector<std::string>.

Цель : вспомнить std::cin / cout, getline, циклы, функции.
*/

#include <iostream>
#include <vector>
#include <string>

int PrintMenu()
{
    std::cout << "\n1. Добавить задачу\n"
              << "2. Показать список задач\n"
              << "3. Удалить по индексу\n"
              << "4. Выход\n\n";

    int numberCommand;
    std::cin >> numberCommand;

    return numberCommand;
}

void AddTask(std::vector<std::string>&add_task)
{
    std::string enterTask;

    std::cout << "\nВведите задачу: ";
    
    std::cin.ignore();
    std::getline(std::cin, enterTask);
    add_task.push_back(enterTask);
}

void ShowTask(std::vector<std::string>&show_task)
{
    for (int i=0; i<show_task.size(); i++)
    {
        std::cout << "\nЗадача: " << show_task[i];
    }
}

void DeleteTaskIndex(std::vector<std::string>&delete_task)
{
    int n=0;
    std::cout << "\nВведите номер задачи, которую хотите удалить: ";
    std::cin >> n;

    if (n > delete_task.size())
    {
        std::cout << "\nНет задачи с таким номмером!\n";
        return;
    }
    
    delete_task.erase(delete_task.begin() + n - 1);
}

int main()
{
    setlocale(LC_ALL, "Russian");

    std::vector<std::string> task;

    bool isRunning = true;

    while (isRunning)
    {
        switch (PrintMenu())
        {
        case 1:
            AddTask(task);
            break;
        case 2:
            ShowTask(task);
            break;
        case 3:
            DeleteTaskIndex(task);
            break;
        case 4:
            isRunning = false;
            std::cout << "Программа завершила свою работу\n\n";
            break;
        default:
            std::cout << "Ошибка! Такой задачи не существует!\n";
            break;
        }
    }
    
    return 0;
}

