#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
	String m_Name;
public:
	Entity() : m_Name("UnKnown") {}
	Entity(const String& name) : m_Name(name) {}
	const String& GetName() const { return m_Name; }
};

int main()
{
	int* b = new int[50];
	Entity* e = new Entity;

	/*Entity* e;
	{
		Entity* entity = new Entity("Cherno");
		e = entity;
		std::cout << entity->GetName() << std::endl;
	}*/
	
	std::cin.get();
	delete[] b;
	delete e;
}