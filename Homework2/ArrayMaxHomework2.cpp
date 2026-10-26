#include <iostream>
#include <vector>

std::vector<int> ReadInput() {

	int size;
	std::vector<int> CreateVector;

	std::cin >> size;
	for (int i = 0; i < size; i++)
	{
		int reg;
		std::cin >> reg;
		CreateVector.push_back(reg);
	}

	return CreateVector;
}

int FindMax(std::vector<int>& CreateVector) {

	int MaxValue = CreateVector[0];
	for (int i = 1; i < CreateVector.size(); ++i)
	{
		if (MaxValue < CreateVector[i])
		{
			MaxValue=CreateVector[i];
		}
    }

	return MaxValue;
}

int main() {

	auto arr = ReadInput();
	std::cout << FindMax(arr);

	return 0;
}