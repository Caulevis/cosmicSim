#include <SFML/Graphics.hpp>
#include <iostream>

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

        window.clear(sf::Color::Red);

//mon code XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX









//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

        window.display();

    }

    return 0;
}
