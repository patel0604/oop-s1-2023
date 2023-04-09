#include "Motorbike.h"
#include "Vehicle.h"
using namespace std;

Motorbike::Motorbike(): Vehicle() {

}

Motorbike::Motorbike(int ID): Vehicle(ID) {

}

int Motorbike::getParkingDuration(){
  time_t time_now = time(0);
  int parking_duration = time_now - Vehicle::getTime();
  int time_adjusted = parking_duration*0.85;
  return time_adjusted; 
}
Motorbike::~Motorbike(){
    
}