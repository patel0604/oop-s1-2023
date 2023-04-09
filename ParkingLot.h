#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
using namespace std;


class ParkingLot {
  private:
  int max_amount;
  Vehicle* vehicles_parked = new Vehicle[max_amount];

  public:
  ParkingLot();
  ParkingLot(int max_amount);
  int getCount();
  void parkVehicle(Vehicle* parking_space);
  void unparkVehicle(int ID);
  int countOverstayingVehicles(int maxParkingDuration);
  ~ParkingLot();
  int vehicles_counter = 0;
};


#endif