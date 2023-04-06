#include <iostream>
#include <string>
#include <stdlib.h>

void Print(const std::string& message)
{
	std::cout << message << std::endl;
}

int main()
{
	using namespace std::string_literals;
	std::wstring name0 = L"Che\0rno"s + L"Hello";

	const char* name1 = "Chenro";
	const wchar_t* name2 = L"Chenro"; 
	const char16_t* name3 = u"Chenro";
	const char32_t* name4 = U"Chenro";
	Print(name1);

	std::cout << strlen(name1) << std::endl;
	std::cin.get();
}