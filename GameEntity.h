#include <iostream>
#include <tuple>
#ifndef GAMEENTITY_H
#define GAMEENTITY_H
using namespace std;

class GameEntity {
    protected:
        tuple<int, int> position;
        char type;
    public:
        GameEntity(int x, int y, char type): position(x,y){
            this -> type = type;
        }
        tuple<int, int> getPos(){
            return position;
        }
        char getType(){
            return type;
        }

        void set_position(int x, int y) {
            position = make_tuple(x,y);
        }
        void set_type(char type) {
            this->type = type;
        }
        virtual void move(int dx, int dy) {}
};
#endif
