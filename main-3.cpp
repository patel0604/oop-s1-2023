#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
#include "Explosion.h"
#include "Mine.h"
#include "Ship.h"
#include "Game.h"
using namespace std;

int main() {
    Game game;
    cout << "initialising game" << endl;
    game.initGame(4, 6, 10, 8);
    cout << "starting game" << endl;
    game.gameLoop(10, 1.5);
    return 0;
}