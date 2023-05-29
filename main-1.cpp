#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include <tuple>
using namespace std;
int main(){
    tuple<int, int> pos1 = Utils::generateRandomPos(50,60);
    tuple<int, int> pos2 = Utils::generateRandomPos(70,90);

    double distance = Utils::calculateDistance(pos1, pos2);

    cout<<"Distance is: "<<distance<<endl;
}
    

