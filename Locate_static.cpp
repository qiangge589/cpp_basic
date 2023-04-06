#include <iostream>

class Singleton
{
public:
	static Singleton& Get()
	{
		static Singleton instance;
		return instance;
	}
	void Hello()
	{
		std::cout << "Hello world!" << std::endl;
	}
};

// int i = 0;
/*void Function()
{
	static int i = 0;
	i++;
	std::cout << i << std::endl;
}*/

int main()
{
	/*Function();
	// i = 10;
	Function(); 
	Function(); 
	Function(); 
	Function();*/
	Singleton::Get().Hello();
	std::cin.get();
}