#ifndef FLAPPYBIRD_GAMERENDERER_H
#define FLAPPYBIRD_GAMERENDERER_H

#include <SFML/Graphics.hpp>
#include "GameModel.h"

class GameRenderer : public sf::Drawable, public sf::Transformable{
    GameModel& _model;
    sf::RenderWindow _window;
public:
    explicit GameRenderer(GameModel& _model);
    void render();
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //FLAPPYBIRD_GAMERENDERER_H
