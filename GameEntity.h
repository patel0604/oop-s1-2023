#include <iostream>
#include <tuple>
#ifndef GAMEENTITY_H
#define GAMEENTITY_H
using namespace std;

class GameEntity {
    private:
        tuple<int, int> position;
        char type;
    public:
        GameEntity(int x, int y, char type);
        tuple<int, int> getPos(){
            return position;
        }
        char getType(){
            return type;
        }
};
#endif
