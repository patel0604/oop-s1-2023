#include <iostream>
#ifndef UTILS_H
#define UTILS_H
using namespace std;
#include <random>
#include <tuple>
#include <cmath>
#include <cstdlib>
#include "GameEntity.h"

class Utils {        
    public:
        static tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){
            int x = rand()%(gridWidth - 1 + 1) + 1;
            int y = rand()%(gridHeight - 1 + 1) + 1;
            tuple<int,int> position(x,y);
            return position;
        }
        static double calculateDistance(tuple<int, int> pos1, tuple<int, int> pos2){
            int x1 = get<0>(pos1);
            int x2 = get<0>(pos2);
            int y1 = get<1>(pos1);
            int y2 = get<1>(pos2);
            double distance = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
            return distance;
        }
};
#endif