#include <iostream>
#include <string>
void PrintString(const std::string& string)
{
	std::cout << string << std::endl;
}
/*void PrintString(std::string string)
{
	string += "h";
	std::cout << string << std::endl;
}*/
int main()
{
	std::string name = std::string("Cherno") + "Hello!";
	// name += "Hello!";
	// char name2[7] = { 'C', 'h', 'e', 'r', 'n', 'o', 0};
	PrintString(name);
	bool contains = name.find("no") != std::string::npos;
	std::cout << name << std::endl;

	std::cin.get();
}