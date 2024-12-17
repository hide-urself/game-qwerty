#include "Skeleton.h"

Skeleton::Skeleton()
{

}

Skeleton::~Skeleton()
{

}

void Skeleton::initialize()
{

}

void Skeleton::load()
{
    if (texture.loadFromFile("Assets/Enemies/Skeleton/Textures/BODY_skeleton.png"))
    {
        sprite.setTexture(texture);
        sprite.setTextureRect(sf::IntRect(moment * 64, facing * 64, spriteHeight, spriteWidth));
    }
}

void Skeleton::update()
{

}

void Skeleton::draw(sf::RenderWindow& window)
{
    window.draw(sprite);
}
