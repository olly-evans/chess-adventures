#include <SFML/Graphics.hpp>

#define SCREEN_WIDTH 1000
#define SCREEN_HEIGHT 1000

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({SCREEN_HEIGHT, SCREEN_WIDTH}), "Chess");
    window.setFramerateLimit(144);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        window.clear();
        window.display();
    }
}
