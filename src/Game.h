#ifndef FLAPPYBIRD_GAME_H
#define FLAPPYBIRD_GAME_H

#include "AssetManager.h"
#include "GameModel.h"
#include "GameRenderer.h"

class Game {
    GameModel _myModel;
    GameRenderer _myRenderer;
public:
    explicit Game();
    void run();
};


#endif //FLAPPYBIRD_GAME_H
