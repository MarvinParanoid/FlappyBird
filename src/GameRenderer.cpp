#include "GameRenderer.h"
#include "DEF.h"

GameRenderer::GameRenderer(GameModel& model) : _model(model) {
    _window.create(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), WINDOW_TITLE);
    _window.setFramerateLimit(60);
}

void GameRenderer::draw(sf::RenderTarget &target, sf::RenderStates states) const {

}

void GameRenderer::render() {
    _window.clear();
    _window.draw(*this);
    _window.display();
}
