// Вы работаете оператором на складе. 
// Время от времени вам привозят новые коробки. 
// Каждая коробка имеет свою грузоподъемность w и объем v.
// Получая новую коробку, вы ставите на ней серийный номер, 
// используя все целые неотрицательные числа последовательно, 
// начиная с нуля.

// Иногда вас просят выдать коробку минимальной грузоподъемности, 
// чтобы она выдержала предмет весом w
// — или коробку минимальной вместимости, 
// в которую можно насыпать песок объемом v
// v. Вам нужно быстро определять серийный номер коробки, 
// которая будет выдана. 
// Коробки обратно на склад не возвращаются. 
// Если подходящих коробок несколько, нужно выбрать ту, 
// которая пролежала на складе меньше.

// Нужно реализовать класс Stock, у которого, среди прочих, 
// будет три функции:

// void Add(int w, int v); — добавить коробку на склад;

// int GetByW(int min_w); — вернуть номер коробки грузоподъемности, 
// хотя бы min_w.

// int GetByV(int min_v); — вернуть номер коробки объема,
// хотя бы min_w.

// Если подходящей коробки нет, соответствующая функция 
// должна вернуть −1.

#include <vector>
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

struct Box {
    int volume = 0;
    int load_capacity = 0;
    int id = 0;
};


class Stock {
public:
    void Add(int v, int w) {
        Box box{v, w, id_generator++};
        storage.push_back(box);
        // [(10, 15, 0), (10, 15, 1), ...]
    }

    int GetByW(int min_w) {
        int index = ????; // index nuznoi korobki v vectore
        for(int i=0; i < storage.size(); ++i){
            if(min_w <= )
        }

        int id = storage[index].id;
        storage.erase(storage.begin() + index);// udalit korobku
        return id;
    }
private:
    std::vector<Box> storage;
    int id_generator = 0;
}


int main() {
    Stock st;
    st.Add(10, 15); // 0
    st.Add(20, 30); // 1
    st.Add(40, 50); // 2
    st.Add(50, 75); // 3
    st.Add(100, 200); // 4
    std::cout << st.GetByW(75) << '\n'; // Otvet: 3
    std::cout << st.GetByW(25) << '\n'; // Otvet: 1
}










// Тренировочное задание по программированию: 
// Отсортированные строки 

// Реализуйте класс, 
// поддерживающий набор строк в отсортированном порядке. 
// Класс должен содержать два публичных метода:


// class SortedStrings {
// public:
//     void AddString(const std::string& s) {
        
//         // добавить строку s в набор
//         string_vector.push_back(s);
//         std::sort(string_vector.begin(), string_vector.end());
//     }
//     std::vector<std::string> GetSortedStrings() {
//         // получить набор из всех добавленных строк в отсортированном порядке
//         //std::sort(string_vector.begin(), string_vector.end());
//         return string_vector;
//     }
// private:
//     // приватные поля
//     std::vector<std::string> string_vector;
// };


// void PrintSortedStrings(SortedStrings strings) {
//     for (const std::string& s : strings.GetSortedStrings()) {
//         std::cout << s << " ";
//     }
//     std::cout << std::endl;
// }

// int main() {
//   SortedStrings strings;
  
//   strings.AddString("first");
//   strings.AddString("third");
//   strings.AddString("second");
//   strings.AddString("second");

//   PrintSortedStrings(strings);
//   PrintSortedStrings(strings);
//   PrintSortedStrings(strings);
//   PrintSortedStrings(strings);
//   PrintSortedStrings(strings);
//   PrintSortedStrings(strings);
//   PrintSortedStrings(strings);
//   PrintSortedStrings(strings);
  
//   return 0;
// }
// Вывод 
// first second third
// first second second third







// struct Point {
//     int x;
//     int y;
// };

// double DistanceToZero(const Point& p) {
//     return sqrt(p.x * p.x + p.y * p.y);
// }

// class Point {
// public:
//     Point(int x_arg, int y_arg) { // Constructor
//         x = x_arg;
//         y = y_arg;
//         distance_to_zero = sqrt(x * x + y * y);
//     }

//     int GetX() {
//         return x;
//     }
//     int GetY() {
//         return y;
//     }

//     void SetX(int new_x) {
//         x = new_x;
//         distance_to_zero = sqrt(x * x + y * y);
//     }

//     double DistanceToZero() {
//         // return sqrt(x * x + y * y);
//         return distance_to_zero;
//     }
// private:
//     int x = 0;
//     int y = 0;
//     double distance_to_zero = 0;
// };

// int main() {
//     // Point p{1, 2};
//     // std::cout << DistanceToZero(p) << '\n';

//     Point p(1, 2); // Constructor
//     std::cout << "X: " << p.GetX() << '\n';
//     std::cout << "Y: " << p.GetY() << '\n';
//     std::cout << "Distance " << p.DistanceToZero() << '\n';
//     // p.x = 5; - EROR

//     p.SetX(42);

//     std::cout << "X: " << p.GetX() << '\n';
//     std::cout << "Y: " << p.GetY() << '\n';
//     std::cout << "Distance " << p.DistanceToZero() << '\n';
// }




// STD::SORT AND COMPARATORS INFO
// #include <algorithm>
// bool MyComparator(int left, int right) {
//     return left > right;
// }

// int main() {
//     std::vector<int> nums{-5, 1, 2, -4, 3};
//     std::sort(nums.begin(), nums.end(), MyComparator);
    
//     for (auto x : nums) {
//         std::cout << x << '\n';
//     }
// }

// DEQUE INFO!
// Primer

// Input:
// 3
// Ivanov top
// Petrov top
// Sidorov bottom
// 2
// 1
// 3

// Output:
// Petrov
// Sidorov

// #include <deque>
// int main() {
    // std::vector<int> nums{1, 2, 3, 4, 5};

    // nums ------------------> [1, 2, 3, 4, 5, ., .]
    //   |
    //   ---------------------> [42, 1, 2, 3, 4, 5, ., .]
    // nums.push_back(6);
    // https://en.cppreference.com/cpp/container/vector
    // nums.insert(nums.begin(), 42);

    // nums.push_front(6); - NETU! OCHEN MEDLENNO!

    // for (auto x : nums) {
    //     std::cout << x << " ";
    // }
    // std::cout << '\n';

    // https://en.cppreference.com/cpp/container/deque
    // std::deque<int> nums2; // []
    // nums2.push_back(42); // [42]
    // std::cout << nums2[0] << '\n';
    // nums2.push_front(57); // [57, 42]
    // for (auto x : nums2) {
    //     std::cout << x << " ";
    // }
    // std::cout << '\n';
// }