#include <iostream>

int Muitiply(int a, int b)
{
	return a * b;
}

void MuitiplyAndLog(int a, int b)
{
	int result = Muitiply(a, b);
	std::cout << result << std::endl;
}

int main()
{
	MuitiplyAndLog(5, 10);
	MuitiplyAndLog(20, 30);
	MuitiplyAndLog(5, 8);
	MuitiplyAndLog(25, 25);
	std::cin.get();
}