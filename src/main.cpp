#include <SFML/Graphics.hpp>
#include <iostream>
#include "corps.h"

using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "My window");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);

//mon code XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Corps terre, lune;

terre.SetColor(sf::Color(0, 0, 255));
lune.SetColor(sf::Color(80, 80, 80));
terre.SetCoords(sf::Vector2f(300, 300));


window.draw(terre);
window.draw(lune);










//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

        window.display();

    }

    return 0;
}
