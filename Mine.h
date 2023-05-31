#include <iostream>
#ifndef MINE_H
#define MINE_H
#include "GameEntity.h"
#include "Explosion.h"
#include <tuple>
using namespace std;

class Mine : public GameEntity{
    public:
        Mine(int x, int y) : GameEntity(x, y, 'M') {}
        Explosion explode(){
            int current_x = get<0>(position);
            int current_y = get<1>(position);
            Explosion car(current_x, current_y);
            type = 'X';
            return car;
        }

        ~Mine() {}
};
#endif