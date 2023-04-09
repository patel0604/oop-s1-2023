#include<iostream>
#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle {
    public:
    Car();
    Car(int ID);
    int getParkingDuration();
    ~Car();
};

#endif