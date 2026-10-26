#include <iostream>
#include <cmath>

double power(double a, int n)
{
	double resault = std::pow(a, n);

	return resault;
}

int main() {

	double warp;
	int degree; 

	std::cin >> warp;
	std::cin >> degree;

	std::cout << power(warp, degree) << "\n";
}