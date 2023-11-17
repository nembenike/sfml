#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML", sf::Style::Default);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {

            switch (event.type)
            {
            case sf::Event::Closed:
                window.close();

            case sf::Event::Resized:
                // std::cout << "New window size: " << event.size.width << "x" << event.size.height << std::endl;
                printf("New window width: %i New window height: %i\n", event.size.width, event.size.height);
                break;
            }
        }
    }

    return 0;
}