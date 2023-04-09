#include <iostream>
#include <ctime>
#ifndef VEHICLE_H
#define VEHICLE_H
using namespace std;

class Vehicle {
  private:
    time_t timeOfEntry;
    int ID;
  public:
    Vehicle();
    Vehicle(int ID);
    int getID();
    time_t getTime();
    int getParkingDuration();
    ~Vehicle();

};

#endif