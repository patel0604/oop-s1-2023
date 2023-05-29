#include <iostream>
#ifndef GAMEENTITY_H
#define GAMEENTITY_H

class GameEntity {
    private:
        std::tuple<int, int> position;
        char type;
    public:
        GameEntity(int x, int y, char type);
        std::tuple<int, int> getPos();
        char getType();
}
#endif
