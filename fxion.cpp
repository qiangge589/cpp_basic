#include <iostream>

class Entity
{
public:
	float X, Y;
	Entity()
	{
		std::cout << "Created Entity" << std::endl;
	}

	Entity(float x, float y)
	{
		X = x;
		Y = y;
	}

	~Entity()
	{
		std::cout << "Destroyed Entity" << std::endl;
	}

	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
};
/*class Log
{
private:
	Log() {}
public:
	static void Write()
	{
	
	}*/
void Function()
{
	Entity e;
	e.Print();
}
int main()
{
	// Log::Write;
	// Log l;
	Function();
	std::cin.get();
}