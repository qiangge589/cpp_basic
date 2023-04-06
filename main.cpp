#include "iostream"
#include "Log.h"

int main()
{
	InitLog();
	Log("Hello world");
	Number(5, 6);
	std::cin.get();
}