// Входные данные
// В первой строке входных данных содержатся натуральные числа 
// N и K. Во второй строке задаются N элементов первого массива, 
// а в третьей строке – K элементов второго массива. 

// Выходные данные
// Требуется для каждого из K чисел вывести в отдельную строку
//  "YES", если это число встречается в первом массиве, 
//  и "NO" в противном случае.

// Примеры
// Входные данные
// 10 5
// 1 2 3 4 5 6 7 8 9 10 
// -2 0 4 9 12 
// Выходные данные
// NO
// NO
// YES
// YES
// NO

#include <iostream>
#include <set>
#include <vector>

std::vector<int> ReadInt(int size) {
    std::vector<int> vec;
    
    for(int i=0; i < size; ++i) {
        int letter;
        std::cin >> letter;
        vec.push_back(letter);
    }
    return vec;
}

struct Data {
	std::vector<int> first;
	std::vector<int> second;
};

Data ReadTwoVectors(int N, int K) {
    Data d;
	d.first = ReadInt(N);
	d.second = ReadInt(K);

    return d;
}

int main() {
    int N, K;
    std::cin >> N;
    std::cin >> K; 
	auto data = ReadTwoVectors(N, K);
	std::cout << data.first.size() << " " << data.second.size() << '\n';
}

// struct User {
// 	std::string name;
// 	int id = 0;
// 	std::string city;
// };

// int main() {
	// int a;
	// a = 5;

	// User p;
	// p.name = "Alex";
	// p.id = 47;
	// p.city = "Kostroma";
	// std::cout << p.name << " " << p.id << " " << p.city << '\n';
// }



// int main() {
//     int N, K;
//     std::cin >> N;
//     std::cin >> K; 
// 	auto first = ReadInt(N);
// 	auto second = ReadInt(K);
// 	// first: [1 2 3 4 5 6 7 8 9 10] 
// 	// second: [-2 0 4 9 12]
// 	// std::cout << "first.size(): " << first.size() << ", second.size(): " << second.size() << '\n';
//     std::set<int> count;
//     for(int i=0; i<first.size();++i){
//         count.insert(first[i]);
//     }
    
//     for(int j=0; j<second.size(); ++j) {
//         auto it = count.find(second[j]);
//         if(it == count.end()){
//             std::cout << "No" << "\n";
//         }
//         else {
//             std::cout << "YES" << "\n";
//         }
//     }
// }


// std::vector<std::string> ReadStrings(int n) {
//     std::vector<std::string> vec;

//      for(int i = 0; i < n; ++i) {
//         std::string str;
//         std::cin >> str;
//         vec.push_back(str);
//     }
//     return vec;
// }

// int CountUnique(const std::vector<std::string>& vec) {

//     std::set<std::string> count;
//     for(int i=0; i<vec.size(); ++i){
//         count.insert(vec[i]);
//     }
// 	return count.size();
// }

// int Info() {
// 	std::set<int> nums;
// 	nums.insert(5);

// 	std::str<std::string> strs;
// 	strs.insert("abba");
// }

// int main() {
//     int n;
//     std::cin >> n;

// 	auto strs = ReadStrings(n);
//     auto out_count = CountUnique(strs);

//     std::cout << out_count << "\n";
//     return 0;
// }



// int main() {
	// std::set<int> my_set;
	// my_set.insert(1);
	// my_set.insert(2);
	// my_set.insert(3);

	// my_set.erase(3);

	// auto it = my_set.find(3); // Very fast!
	// NO 5: it -> end()

	// if (it == my_set.end()) {
		// std::cout << "NO 3!\n";
	// } else {
		// std::cout << *it << '\n';
	// }

	// my_set.insert(5);
	// my_set.insert(5);
	// my_set.insert(5);
	// my_set.insert(5);
	// my_set.insert(5);
	// my_set.insert(5);

	// my_set.insert(4);

	// my_set.insert(50);
	// my_set.insert(1);

	// std::cout << "size: " << my_set.size() << '\n';

	// NO INDEX: error
	// for (int i = 0; i < my_set.size(); ++i) {
	// 	std::cout << my_set[i] << '\n';
	// }

	// OK
	// for (auto x : my_set) {
	// 	std::cout << x << '\n';
	// }

	// auto it = my_set.begin();
	// std::cout << *it << '\n';
	// ++it;
	// std::cout << *it << '\n';
// }