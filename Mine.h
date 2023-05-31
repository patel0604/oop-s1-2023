#ifndef MINE_H
#define MINE_H
#include "GameEntity.h"
#include "Explosion.h"
using namespace std;

class Mine : public GameEntity {
    public:
        Mine(int x, int y) : GameEntity(x, y, 'M') {}

        Explosion explode() {
            int current_x = get<0>(position);
            int current_y = get<1>(position);
            Explosion buss(current_x, current_y);
            type = 'X';
            return buss;
        }

        void explode1(GameEntity& ship) {
            int current_x = get<0>(position);
            int current_y = get<1>(position);
            Explosion buss(current_x, current_y);
            type = 'X';
            buss.apply(ship);
        }

        ~Mine() {}
};

#endif