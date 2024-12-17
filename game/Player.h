#ifndef PLAYER_H
#define PLAYER_H
#include <SFML/Graphics.hpp>
#include <iostream>

class Player
{
private:
	sf::Texture texture;

	int hp;


	sf::Vector2f prePos;

	int facing = 0;
	int moment = 0;
	const int spriteHeight = 64;
	const int spriteWidth = 64;

public:
	sf::Sprite sprite;


public:
	Player();
	~Player();


	void initialize();
	void load();

	void update();
	void draw(sf::RenderWindow& window);
};

#endif