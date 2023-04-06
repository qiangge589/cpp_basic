#include <iostream>

class Entity
{
public:
	float X, Y;
	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
		std::cout << xa << ", " << ya << std::endl;
	}
};
class Player : public Entity
{
public:
	const char* Name;
	void Printname()
	{
		
	}
};
int main()
{
	std::cout << sizeof(Player) << std::endl;
	Player player;
	player.Move(5, 5);
	player.X = 2;
	player.Printname();
	std::cin.get();
}