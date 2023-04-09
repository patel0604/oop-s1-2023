#include <iostream>
#include "Vehicle.h"
#include "ParkingLot.h"
#include "Bus.h"
#include "Motorbike.h"
#include "Car.h"
#include <string>
using namespace std;

int main() {
  ParkingLot parking_lot(5);
  
  while (parking_lot.getCount() < 5) {
    int vehicle_ID;
    cout << "Enter your vehicle's ID" << endl;
    cin >> vehicle_ID;

    string type_of_vehicle;
    cout << "What type of vehicle will you park" << endl;
    cin >> type_of_vehicle;

    Vehicle* vehicles_parked = new Vehicle[5];

    if (type_of_vehicle == "Car") {
      vehicles_parked = new Car(vehicle_ID);
    } else if (type_of_vehicle == "Bus") {
      vehicles_parked = new Bus(vehicle_ID);
    } else if (type_of_vehicle == "Motorbike") {
      vehicles_parked = new Motorbike(vehicle_ID);
    } else {
      cout << "Please enter Car, Bus or Motorbike" << endl;
    }
    parking_lot.parkVehicle(vehicles_parked);
  }


  return 0;
}