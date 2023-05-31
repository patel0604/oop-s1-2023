#include <iostream>
#include "GameEntity.h"
#include "Utils.h"
using namespace std;

int main() {
    int gridWidth = 15;
    int gridHeight = 10;
    // reset the rand seed
    srand(static_cast<unsigned>(time(0)));
    tuple<int,int> pos1 = Utils::generateRandomPos(gridWidth, gridHeight);
    tuple<int,int> pos2 = Utils::generateRandomPos(gridWidth, gridHeight);

    cout << "pos1 x: " << get<0>(pos1) << " y: " << get<1>(pos1) << endl;
    cout << "pos2 x: " << get<0>(pos2) << " y: " << get<1>(pos2) << endl;

    double distance = Utils::calculateDistance(pos1, pos2);
    cout << "distance: " << distance << endl;
    return 0;
}
