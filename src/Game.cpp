#include "Game.h"

Game::Game() : _myModel(), _myRenderer(_myModel) {

}

void Game::run() {
    // loop
    _myModel.update();
    _myRenderer.render();
}
