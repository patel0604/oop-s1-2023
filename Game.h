#ifndef GAME_H
#define GAME_H
#include <vector>
#include "GameEntity.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"
#include <iostream>
using namespace std;

class Game {
    private:
        vector<GameEntity*> entities;
    public:
        vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
            for (int i = 0; i < numShips; i++) {
                tuple<int,int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
                int x = get<0>(pos);
                int y = get<1>(pos);
                Ship* ship = new Ship(x,y);
                entities.push_back(ship);
            }
            for (int i = 0; i < numMines; i++) {
                tuple<int,int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
                int x = get<0>(pos);
                int y = get<1>(pos);
                Mine* mine = new Mine(x,y);
                entities.push_back(mine);
            }
            return entities;
        }

        void gameLoop(int maxIterations, double mineDistanceThreshold) {
            for (int i = 0; i < maxIterations; i++) {
                for (int s = 0; s < entities.size(); s++) {
                    if (entities[s]->getType() == 'S') {
                        entities[s]->move(1,0);
                        for (int m = 0; m < entities.size(); m ++) {
                            if (entities[m]->getType() == 'M') {
                                if (Utils::calculateDistance(entities[s]->getPos(), entities[m]->getPos()) < mineDistanceThreshold) {
                                    entities[m]->explode1(*entities[s]);
                                }
                            }
                        }
                    }
                }
                int counter = 0;
                for (int i = 0; i < maxIterations; i++) {
                    if (entities[i]->getType() == 'S') {
                        counter++;
                    }
                }
                if (counter == 0) {
                    break;
                }
            }
        }

        vector<GameEntity*> get_entities() {return entities;}

        void set_entities(vector<GameEntity*> replace) {
            entities = replace;
        }

        ~Game() {
            for (GameEntity* ptr : entities) {
                delete ptr;
            }
            entities.clear();
        }
};

#endif