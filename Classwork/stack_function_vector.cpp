#include <iostream>
#include <vector>


int FindMax(const std::vector<int>& findVector) {
	int MaxValue = findVector[0];
	for (int i = 1; i < findVector.size(); ++i)
	{
		if (MaxValue < findVector[i])
		{
			MaxValue=findVector[i];
		}
    }

	return MaxValue;
}

std::vector<int> ReadInput() {
	int size;
	//               create_vector
	//               createVector
	std::vector<int> createVector;

	std::cin >> size;
	for (int i = 0; i < size; i++)
	{
		int reg;
		std::cin >> reg;
		createVector.push_back(reg);
	}

	return createVector;
}

std::vector<int> ReadVector(int size) {
	std::vector<int> createVector;

	for (int i = 0; i < size; i++)
	{
		int reg;
		std::cin >> reg;
		createVector.push_back(reg);
	}
	return createVector;
}

void Test() {
	std::vector<int> nums = {1, 2, 3};
	int result = FindMax(nums);
	if (result != 3) {
		std::cout << "OOPS!\n";
	}
}

int main() {
	// auto arr = ReadInput();
	// std::vector<int> arr = ReadInput();
	// std::vector<int> arr2 = {1, 2, 3};

	int size;	
	std::cin >> size;
	auto arr = ReadVector(size);

	std::cout << FindMax(arr) << '\n';

	return 0;
}

// void Print1(int x, int y) {
// 	x = x + 100;
// 	y = y + 100;
// 	std::cout << "x: " << x << ", y: " << y << '\n';
// }

// void Print2(int& x, int& y) {
// 	x = x + 100;
// 	y = y + 100;
// 	std::cout << "x: " << x << ", y: " << y << '\n';
// }

// void Print3(const int& x, const int& y) {
// 	// error: assignment of read-only reference ‘x’
// 	//    28 |         x = x + 100;
// 	// x = x + 100;
// 	// y = y + 100;
// 	std::cout << "x: " << x << ", y: " << y << '\n';
// }

// void Print4(int* x, int* y) {
// 	*x = *x + 100;
// 	*y = *y + 100;
// 	std::cout << "x: " << *x << ", y: " << *y << '\n';
// }

// Call stack

// | main    
// |  result = | 47 |
// |  a = | 5 |,  b = | 42 |
// |_______________________

// int Sum1(int x, int y) {
// 	int s = x + y;
// 	return s;
// }

// void Sum2(int x, int y, int& result) {
// 	int s = Sum1(x, y);
// 	result = s;
// }

// Vybor: copy, &, const&
// (int a, int&, const int&)

// Small -> copy
// int, double, char, bool

// Big -> & / const&
// vector
// string
// ...

// int main() {
// 	int a = 5;
// 	int b = 42;
// 	// int result = Sum1(a, b);
// 	int result;
// 	Sum2(a, b, result);
// 	std::cout << result << '\n';
// }


// Queue
// -> [1, 2, 3] ->

// Stack
// [1, 2, 3] <->

// |      |
// |      |
// |      | 
// |   2  | - top()
// |   1  |
// |______|

// #include <stack>

// int main() {
// 	std::stack<int> st;
// 	st.push(1);
// 	st.push(2);
// 	st.push(3);

// 	while (!st.empty()) {
// 		std::cout << st.top() << '\n';
// 		st.pop();
// 	}
// }
