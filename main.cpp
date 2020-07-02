////////////////////////////////////////////////////////////
// Precompilied Headers
////////////////////////////////////////////////////////////
#include "pch.h"


int main()
{
    // Create a window context
    sf::RenderWindow window(sf::VideoMode(800, 600), "My game window");

    // Do us a circle shape
    sf::CircleShape shape(50.f);

    // set the shape color to green
    shape.setFillColor(sf::Color(100, 250, 50));
    // set a 10-pixel wide orange outline
    shape.setOutlineThickness(10.f);
    shape.setOutlineColor(sf::Color(255, 10, 10));
    // Center the shape relative to the window size
    shape.setPosition(window.getSize().x / 2 - shape.getRadius(), window.getSize().y / 2 - shape.getRadius());

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event or Escape key is pressed: we close the window
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();

            // clear the window with black color
            window.clear(sf::Color::Black);

            // draw everything here...
            window.draw(shape);

            // end the current frame
            window.display();
        }
    }

    return EXIT_SUCCESS;
}

