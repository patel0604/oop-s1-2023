#include <iostream>
#include <tuple>
#ifndef GAMEENTITY_H
#define GAMEENTITY_H
using namespace std;

class GameEntity {
    private:
        tuple<int, int> position;
        char type;
        int x;
        int y;
    public:
        GameEntity(int x, int y, char type);
        tuple<int, int> getPos(){
            return position;
        }
        char getType(){
            return type;
        }
        virtual void apply(GameEntity& entity)=0;
};
#endif
