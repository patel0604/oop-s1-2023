#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle() {
  timeOfEntry = time(0);
  ID = 0;
}

Vehicle::Vehicle(int ID): ID(ID) {
  this -> timeOfEntry = time(0);
}

int Vehicle::getID() {
  return ID;
}

time_t Vehicle::getTime(){
    return this->timeOfEntry;
}

int Vehicle::getParkingDuration(){
  int secs;
  secs = time(0) - timeOfEntry;
  return secs;
}

Vehicle::~Vehicle(){

}