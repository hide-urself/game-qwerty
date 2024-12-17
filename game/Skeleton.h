#ifndef SKELETON_H
#define SKELETON_H
#include <SFML/Graphics.hpp>

class Skeleton
{
private:
	int hp;

	sf::Texture texture;
	sf::Sprite sprite;

	int facing = 0;
	int moment = 0;
	const int spriteHeight = 64;
	const int spriteWidth = 64;

public:

public:
	Skeleton();
	~Skeleton();


	void initialize();
	void load();

	void update();
	void draw(sf::RenderWindow& window);
};

#endif