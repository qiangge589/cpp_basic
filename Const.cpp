#include <iostream>
#include <string>

class Entity
{
private:
	int m_X, m_Y;
	mutable int var;	// mutable
public:
	int GetX() const
	{
		var = 2;	// mutable
		return m_X;
	}
	int GetX()
	{
		return m_X;
	}
	void SetX(int x)
	{
		m_X = x;
	}
};
void PrintEntity(const Entity& e)
{
	std::cout << e.GetX() << std::endl;
}
int main()
{
	Entity e;
	const int MAX_AGE = 90;
	//int* const a = new int;
	// const int* a = new int; == int const* a = new int; 
	// const int* const a = new int;
	int* a = new int;
	*a = 2;
	a = (int*)&MAX_AGE;
	std::cout << *a << std::endl;
	std::cin.get();
}