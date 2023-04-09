#include<iostream>
#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include "Vehicle.h"
using namespace std;

class Motorbike : public Vehicle {
    public:
    Motorbike();
    Motorbike(int ID);
    int getParkingDuration();
    ~Motorbike();
};

#endif