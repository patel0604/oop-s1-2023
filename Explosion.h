#include <iostream>
#ifndef EXPLOSION_H
#define EXPLOSION_H
#include "GameEntity.h"
#include "Effect.h"
using namespace std;

class Explosion : public GameEntity, public Effect{
    public:
        Explosion(int x, int y) : GameEntity(x, y, 'E'){

        }
        void apply(GameEntity& entity) {
            entity.set_position(-1,-1);
            entity.set_type('X');
        }
         
        ~Explosion() {}

};
#endif
