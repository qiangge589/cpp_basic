#include <iostream>
#define LOG(x) std::cout << x << std::endl;
#define PRINT(y) printf("vec2: %f\n", y);

class Player
{
public:
	int x, y;
	int speed;
	void move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};

struct Vec2
{
	float x, y;
	void Add(const Vec2& other)
	{
		x += other.x;
		y += other.y;
	}
};
int main()
{
	Player player;	//class Player player;
	player.move(1, -1);
	Vec2 vec2;	//struct Vec2 vec2;
	vec2.x = 1;
	vec2.y = 2;
	PRINT(vec2.x);
	PRINT(vec2.y);
	std::cin.get();
}