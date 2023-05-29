#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"

int main(){
    std::tuple<int, int> pos1 = Utils::generateRandomPos(50,60);
    std::tuple<int, int> pos2 = Utils::generateRandomPos(70,90);

    double distance = Utils::calculateDistance(pos1, pos2);

    std::cout<<"Distance is: "<<distance<<std::endl;
}
    

