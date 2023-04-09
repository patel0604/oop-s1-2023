#include "Bus.h"
#include "Vehicle.h"
using namespace std;

Bus::Bus(): Vehicle() {

}

Bus::Bus(int ID): Vehicle(ID) {

}

int Bus::getParkingDuration(){
  time_t time_now = time(0);
  int parking_duration = time_now - Vehicle::getTime();
  int time_adjusted = parking_duration*0.75;
  return time_adjusted; 
}
Bus::~Bus(){
    
}