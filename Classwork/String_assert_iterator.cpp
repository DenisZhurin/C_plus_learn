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
#include <string>
#include <cassert>
#include <vector>
#include <algorithm>


int main() {
	std::vector<int> nums{10, 20, 30, 40, 50};

	// for (int i = 0; i < nums.size(); ++i) {
	// 	std::cout << nums[i] << '\n';
	// }
	
	// for (int x : nums) { // COPY
	// 	x = 42;
	// 	std::cout << x << '\n'; // 42
	// }
	// for (int& x : nums) { // REFERENCE
	// 	x = 42;
	// }
	// for (int x : nums) {
	// 	std::cout << x << '\n';
	// }

	// [10, 20, 30, 40, 50]
	//   ^
	//   |
	//   it
	// auto it = nums.begin(); // iterator
	// std::cout << *it << '\n'; // 10

	// ++it;
	// [10, 20, 30, 40, 50]
	//       ^
	//       |
	//       it
	// std::cout << *it << '\n'; // 20
	
	// [10, 20, 30, 40, 50]  
	//                       ^
	//                       |
	//                     nums.end()

	// for (auto it = nums.begin(); it < nums.end(); ++it) {
	// 	std::cout << *it << '\n';
	// }

	// nums.erase(it);

	auto find_it = std::find(nums.begin(), nums.end(), 40);
	nums.erase(find_it);

	for (int x : nums) {
		std::cout << x << '\n';
	}
}
// https://en.cppreference.com/cpp/container/vector
// https://en.cppreference.com/cpp/container/vector/erase


// vector, map, set
// std::find, std::sort
// class

// Homework:
// functions
// vector
// string

// iterator ?

















// 1. std::string word - copy
// 2. std::string& word - reference
// 3. const std::string& word - const reference

// bool IsPalindrom(const std::string& input_word) {
// 	// input_word = "accb"

// 	int j;
// 	j = input_word.size() - 1;
// 	bool k = true; // k = true
// 	for (int i = 0; i < input_word.size() / 2; i++) {
// 		// j = 2
// 		// i = 1
// 		// input_word[i] = 'c'
// 		// input_word[j] = 'c' 
		
// 		if (input_word[i] == input_word[j]) {
// 			k = true;
// 		}
// 		else {
// 			k = false;
// 			break;
// 		}
// 		--j;
// 	}
// 	return k;
// }


// int main() {
	// "a", "", "aa", "ab", "aba", "cba", "azxa", "accb"
// 	assert(IsPalindrom("a") == true);
// 	assert(IsPalindrom("") == true);
// 	assert(IsPalindrom("ab") == false);
// 	assert(IsPalindrom("aa") == true);
// 	assert(IsPalindrom("aba") == true);
// 	assert(IsPalindrom("cba") == false);
// 	assert(IsPalindrom("azxa") == false);
// 	assert(IsPalindrom("accb") == false);
// }



// std::string
//  HEAD
//  size = 5        8 bytes
//  capacity = 5    8 bytes
//  data ---------  8 bytes
//               V
//               ['m', 'a', 'd', 'a', 'm'] 1 byte * size = 5 bytes
// 8 + 8 + 8 + 5 = 28 bytes

// ASKII vs UNICODE
// int main() {
	// char c; // 1 byte - ASKII code
	// https://www.asciitable.com/

	// std::cin >> c;
	// if (c >= '0' && c <= '9') {
	// 	std::cout << "Cifra\n";
	// } else {
	// 	std::cout << "Ne cifra\n";
	// }

	// Unicode - UTF
	// 1 - 4 bytes
	
	// std::string rus_word = "Привет";
	// UTF	[-97, -47, -128, -48, ...]
	//        П          р         ..

	// std::string eng_word = "Hello";
	//                     ['H', 'e', 'l', 'l', 'o']
	//                     [72, 101, 108, 108, 111]
	
	// for (int i = 0; i < rus_word.size(); ++i) {
	// 	std::cout << rus_word[i] << ", code: " << 
	// 	static_cast<int>(rus_word[i]) << '\n';
	// }
// }
