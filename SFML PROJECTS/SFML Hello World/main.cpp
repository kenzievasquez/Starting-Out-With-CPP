#include <SFML/Graphics.hpp>

int main(){
    // Render a window, 200x200, with title
    sf::RenderWindow window(sf::VideoMode({400,400}), "SFML Works!");
    window.setFramerateLimit(60);

    // Create a CircleShape object r=50
    sf::CircleShape circle(50.f);
    sf::RectangleShape rect(sf::Vector2f(100.f, 100.f));
    
    // Setting positions of circle and rectangle
    circle.setPosition(sf::Vector2f(0.f, 0.f));
    rect.setPosition(sf::Vector2f(200.f, 200.f));
    
    // setFillColor the shape object with Color Yellow
    circle.setFillColor(sf::Color(255,100,100));
    rect.setFillColor(sf::Color(255,0,0,100));
    
    // While the window is open
    while (window.isOpen()){
        sf::Event event;

        // 
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Update
        circle.move(0.5f, 0.1f);
        rect.rotate(5.f);

        // Draw
        window.clear(sf::Color::Black);

        // Draw everything
        window.draw(circle);
        window.draw(rect);
        window.display();
    }
}