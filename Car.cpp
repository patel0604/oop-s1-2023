#include "Car.h"
#include "Vehicle.h"
using namespace std;

Car::Car(): Vehicle() {

}

Car::Car(int ID): Vehicle(ID) {

}

int Car::getParkingDuration(){
  time_t time_now = time(0);
  int parking_duration = time_now - Vehicle::getTime();
  int time_adjusted = parking_duration*0.9;
  return time_adjusted; 
}
Car::~Car(){

}