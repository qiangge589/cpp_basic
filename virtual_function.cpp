#include <iostream>
#include <string>

class Printable
{
public:
	virtual std::string GetClassName() = 0;
};
class Entity : public Printable
{
public:
	virtual std::string GetName() { return "Entity";}
	std::string GetClassName() override{ return "Entitry"; }
};
class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name)
		: m_Name(name) {}
	std::string GetName() override { return m_Name; }
	std::string GetClassName() override { return "Player"; }
};
class A : public Printable
{
	std::string GetClassName() { return "A"; }
};
void Printname(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;
}
void Print(Printable* obj)
{
	std::cout << obj->GetClassName() << std::endl;
}
int main()
{
	Entity* e = new Entity();
	//Printname(e);
	Player* p = new Player("cherno");
	//Printname(p);
	Print(e);
	Print(p);
	//Print(new A());	// test
	std::cin.get();
}