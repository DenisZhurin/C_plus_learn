/*
Задание по программированию: Очередь
Люди стоят в очереди, но никогда не уходят из её начала, зато могут приходить в конец и уходить оттуда. 
Более того, иногда некоторые люди могут прекращать и начинать беспокоиться из-за того, что очередь не продвигается.

Реализуйте обработку следующих операций над очередью:

WORRY i: пометить i-го человека с начала очереди (в нумерации с 0) как беспокоящегося;
QUIET i: пометить i-го человека как успокоившегося;
COME k: добавить k спокойных человек в конец очереди;
COME -k: убрать k человек из конца очереди;
WORRY_COUNT: узнать количество беспокоящихся людей в очереди.
Изначально очередь пуста.

Формат ввода
Количество операций Q, затем описания операций.

Для каждой операции WORRY i и QUIETi  гарантируется, что человек с номером i существует в очереди на момент операции.

Для каждой операции COME -k гарантируется, что k не больше текущего размера очереди.

Формат вывода
Для каждой операции WORRY_COUNT выведите одно целое число — количество беспокоящихся людей в очереди.

Пример
Ввод
8
COME 5
WORRY 1
WORRY 4
COME -2
WORRY_COUNT
COME 3
WORRY 3
WORRY_COUNT
Вывод
1
2
*/
#include <iostream>
#include <vector>

int main() {
    int number_requests;
    std::cin >> number_requests;
    std::vector<int> queue;
	// 2 - quiet person 
	// 1 - worried person
	// []
	// COME 2
	// [2, 2]
	// COME 3
	// [2, 2, 2, 2, 2]
	// WORRY 1
	// [1, 2, 2, 2, 2]
	// COME -2
	// [1, 2, 2]
	// WORRY_COUNT
	// kol-vo 1 -> 1
    /*
    WORRY i: пометить i-го человека с начала очереди (в нумерации с 0) как беспокоящегося;
QUIET i: пометить i-го человека как успокоившегося;
COME k: добавить k спокойных человек в конец очереди;
COME -k: убрать k человек из конца очереди;
WORRY_COUNT: узнать количество беспокоящихся людей в очереди.
*/
    int quiet_person, worried_person;
    quiet_person = 2;
    worried_person = 1;
    for(int i = 0; i < number_requests; ++i) {
		std::string command;
    	std::cin >> command;
    
        if(command == "COME") {
			int number_people;
			std::cin >> number_people;
            queue.resize(queue.size() + number_people, 2);
        }
        else if (command == "WORRY") {
            int index_worry_people;
            std::cin >> index_worry_people;
            queue[index_worry_people - 1] = 1;
        }
        else if (command == "QUIET") {
            int index_quiet_people;
            std::cin >> index_quiet_people;
            queue[index_quiet_people - 1] = 2;
        }
        else if (command == "WORRY_COUNT") {
            int count = 0;
			for(int i = 0; i < queue.size(); ++i) {
                
                if(queue[i] == 1) {
                    count+=1;
                }
            }
			std::cout << count << '\n';
        }
		
		std::cout << "|";
		for (int i = 0; i < queue.size(); ++i) {
			std::cout << queue[i] << " ";
		}
		std::cout << "|\n";
    }
    return 0;
}

// int main() {
// 	std::vector<int> queue;

// 	queue.push_back(10); // [10]

// 	queue.resize(5, 42); // |10 42 42 42 42 |

// 	queue.resize(3); // |10 42 42 |

// 	// size + 5
// 	queue.resize(queue.size() + 5, 11);
// 	// |10 42 42 11 11 11 11 11 |

// 	std::cout << "|";
// 	for (int i = 0; i < queue.size(); ++i) {
// 		std::cout << queue[i] << " ";
// 	}
// 	std::cout << "|\n";
// }


/*
Тренировочное задание по программированию: Список студентов
Определите структуру "Студент" с полями имя, фамилия, дата, месяц и год рождения. 
Создайте вектор из таких структур, заполните его из входных данных и затем по запросам выведите нужные поля.

Формат ввода
Первая строка содержит одно целое число N от 0 до 10000 - число студентов.

Далее идут N строк, каждая из которых содержит две строки длиной от 1 до 15 символов - имя и фамилия очередного студента, и три целых числа от 0 до 1000000000 - день, месяц и год рождения.

Следующая строка содержит одно целое число M от 0 до 10000 - число запросов.

Следующие M строк содержат строку длиной от 1 до 15 символов - запрос, и целое число от 0 до 1000000000 - номер студента (нумерация начинается с 1).

Формат вывода
Для запроса вида "name K", где K от 1 до N, выведите через пробел имя и фамилию K-го студента.

Для запроса вида "date K", где K от 1 до N, выведите через точку число, месяц и год рождения K-го студента.

Для остальных запросов выведите "bad request".

std::string s; // Ivan
std::cin >> s;

Пример ввода
3
Ivan Ivanov 1 1 1901
Petr Petrox 2 2 1902
Alexander Sidorov 3 3 1903
3
name 1
date 3
mark 5
Пример вывода
Ivan Ivanov
3.3.1903
bad request
*/

// #include <iostream>
// #include <vector>
// #include <string>

// struct Student {
//     std::string name;
//     std::string surname;
//     int birth_day;
//     int birth_month;
//     int birth_year;
// };

// std::vector<Student> DataBase() {
//     Student p1;
//     Student p2;
//     Student p3;

//     p1.name = "Ivan";
//     p1.surname = "Ivanov";
//     p1.birth_day = 15;
//     p1.birth_month = 05;
//     p1.birth_year = 1997;

//     p2.name = "Anna";
//     p2.surname = "Petrova";
//     p2.birth_day = 22;
//     p2.birth_month = 11;
//     p2.birth_year = 1999;

//     p3.name = "Dmitri";
//     p3.surname = "Vasilev";
//     p3.birth_day = 10;
//     p3.birth_month = 8;
//     p3.birth_year = 2000;

// 	std::vector<Student> database;
// 	database.push_back(p1);
// 	database.push_back(p2);
// 	database.push_back(p3);

// 	// [p1, p2, p3]
// 	//   0   1   2
// 	return database;
// }

// 3
// name 1
// -> Ivan Ivanov

// date 3
// -> 10.8.2000

// mark 5
// -> bad request

// struct Request {
// 	std::string command;
// 	int index;
// };

// Request ReadRequest() {
// 	Request request;
// 	std::cin >> request.command >> request.index;
// 	request.index -= 1;
// 	return request;
// }

// void PrintRequest(const Request& request, const std::vector<Student>& db) {
// 	if (request.command == "name") {
// 		std::cout << db[request.index].name << " " << db[request.index].surname << "\n";
// 	}
// 	else if (request.command == "date") {
// 		std::cout << db[request.index].birth_day << "." 
// 		<< db[request.index].birth_month << "." 
// 		<< db[request.index].birth_year << "\n";
// 	}
// 	else if (request.command == "mark") {
// 		std::cout << "bad request" << "\n";
// 	}
// }

// Student ReadStudent() {
// 	Student st;
// 	// TODO:
// 	// Ivan Ivanov 1 1 1901 > st
//     std::cin >> st.name >> st.surname >> st.birth_day 
// 	>> st.birth_month >> st.birth_year;
// 	return st;
// }

// int main() {
// 	// auto db = DataBase();

// 	int number_students;
// 	std::cin >> number_students;
// 	std::vector<Student> db;
// 	for (int i = 0; i < number_students; ++i) {
// 		auto student = ReadStudent();
// 		db.push_back(student);
// 	}


// 	int number_requests;
//     std::cin >> number_requests;
//     for(int i=0; i < number_requests; ++i) {
//         auto request = ReadRequest();
// 		PrintRequest(request, db);
//     }
//     return 0;
// }


/*
Тренировочное задание по программированию: Анаграммы
Слова называются анаграммами друг друга, если одно из них можно получить перестановкой букв в другом. 
Например, слово «eat» можно получить перестановкой букв слова «tea», поэтому эти слова являются анаграммами друг друга. 
Даны пары слов, проверьте для каждой из них, являются ли слова этой пары анаграммами друг друга.

Указание
Один из способов проверки того, являются ли слова анаграммами друг друга, заключается в следующем. 
Для каждого слова с помощью словаря подсчитаем, сколько раз в нём встречается каждая буква. 
Если для обоих слов эти словари равны (а это проверяется с помощью обычного оператора ==), то слова являются анаграммами друг друга, в противном случае не являются.

При этом построение такого словаря по слову удобно вынести в отдельную функцию BuildCharCounters.

Формат ввода
Сначала дано число пар слов N, затем в N строках содержатся пары слов, которые необходимо проверить. Гарантируется, что все слова состоят лишь из строчных латинских букв.

Формат вывода
Выведите N строк: для каждой введённой пары слов YES, если эти слова являются анаграммами, и NO в противном случае.

Пример
Ввод
3
eat tea
find search
master stream
Вывод
YES
NO
YES
*/
/*
#include <iostream>
#include <string>
#include <map>

std::map<char, int>BuildCharCounters(const std::string& s) {
    std::map<char, int> letter;
	// letter:
	// a -> 2
	// b -> 2
    for (const char x : s) { // s = "abba"
		// x = 'a'
        ++letter[x];
    }
    return letter;
}

bool IsAnagramm(const std::string& w_one, const std::string& w_two) {
    std::map<char, int> word_one = BuildCharCounters(w_one);
    std::map<char, int> word_two = BuildCharCounters(w_two);

    return word_one == word_two;
}

int main() {
    int N;
    std::cin >> N;
    for (int i = 0; i < N; ++i) {
		std::string w_one, w_two;
    	std::cin >> w_one >> w_two;
		
		if (IsAnagramm(w_one, w_two)) {
        	std::cout << "YES" << std::endl;
    	} else {
        	std::cout << "NO" << std::endl;
    	}
	}
}
*/