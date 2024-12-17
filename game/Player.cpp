#include "Player.h"

Player::Player()
{

}

Player::~Player()
{

}

void Player::initialize()
{

}

void Player::load()
{
    if (texture.loadFromFile("Assets/Player/Textures/BODY_skeleton.png"))
    {
        sprite.setTexture(texture);
        sprite.setTextureRect(sf::IntRect(moment * 64, facing * 64, spriteHeight, spriteWidth));
    }
    else
        std::cout << "errore";
}

void Player::update()
{
    prePos = sprite.getPosition();

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        sprite.setPosition(prePos.x + 1, prePos.y + 0);
        facing = 3;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        sprite.setPosition(prePos.x - 1, prePos.y + 0);
        facing = 1;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        sprite.setPosition(prePos.x + 0, prePos.y + 1);
        facing = 2;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        sprite.setPosition(prePos.x + 0, prePos.y - 1);
        facing = 0;
    }

    sprite.setTextureRect(sf::IntRect(moment * 64, facing * 64, spriteHeight, spriteWidth));
}

void Player::draw(sf::RenderWindow& window)
{
    window.draw(sprite);
}
