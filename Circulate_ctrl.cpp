#include <iostream>
#include "Log.h"

int main()
{
	
	for (int i = 0; i < 5; i++) {
		if ((i + 1) % 2 == 0)
			break; //continue
		Log("Hello world!");
		std::cout << i << std::endl;
	}
		
	//上与下等价
	/*int i = 0;
	bool condition = true;
	for (; condition;)
	{
		Log("Hello world!");
		i++;
		if (!(i < 5))
			condition = false;
	}*/
	/*Log("===================================");

	int i = 0;
	while (i < 5)
	{
		Log("Hello world!");
		i++;
	}
	bool condition = false;
	do {
		Log("\none \"Hello world!\" ");
		i++;
	} while (condition);
	*/

	std::cin.get();
}