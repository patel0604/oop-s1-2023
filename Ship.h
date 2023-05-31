#include <iostream>
#ifndef SHIP_H
#define SHIP_H
#include "GameEntity.h"
using namespace std;

class Ship : public GameEntity {
    public:
        Ship(int x, int y) : GameEntity(x, y, 'S'){}
        void move(int dx, int dy){
            int current_x = get<0>(position);
            int current_y = get<1>(position);
            position = make_tuple(current_x + dx, current_y + dy);
        }
        ~Ship() {}
};
#endif