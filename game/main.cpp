#include "Player.h"
#include "Skeleton.h"

int main()
{
    Player player;
    Skeleton skeleton;

    player.initialize();


    //window variables
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode(800, 600), "Game", sf::Style::Default, settings);
    window.setFramerateLimit(120);

    //---------------------------------------------------------
    player.load();
    skeleton.load();
    //--------------------------------------------------------------------------------------------------------------

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed())
                window.close();
        }
        player.update();


        //---------------------------------------------------------

        window.clear(sf::Color::Black);

        skeleton.draw(window);
        player.draw(window);

        window.display();
    }

    return 0;
}
