#include <iostream>
#include "Log.h"

void InitLog()
{
	Log("Initializing Log");
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}

void Number(int a, int b)
{
	int result = a * b;
	std::cout << result << std::endl;
}
