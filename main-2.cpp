#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
#include "Explosion.h"
#include "Mine.h"
#include "Ship.h"
using namespace std;

int main() {
    Ship ship(5,7);
    Mine mine(2,9);
    ship.move(-3,2);
    int ship_x = get<0>(ship.getPos());
    int ship_y = get<1>(ship.getPos());
    cout << "new ship pos x:" << ship_x << " y: " << ship_y << endl;
    int mine_x = get<0>(mine.getPos());
    int mine_y = get<1>(mine.getPos());
    if (ship_x == mine_x && ship_y == mine_y) {
        Explosion buss = mine.explode();
        buss.apply(ship);
    }
    ship_x = get<0>(ship.getPos());
    ship_y = get<1>(ship.getPos());
    cout << "final ship pos x:" << ship_x << " y: " << ship_y << " final ship type: " << ship.getType() << endl;
    return 0;
}