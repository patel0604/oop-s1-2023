#include "ParkingLot.h"
#include "Vehicle.h"
#include <iostream>
using namespace std;

ParkingLot::ParkingLot(): max_amount(0) {

}

ParkingLot::ParkingLot(int max_amount): max_amount(max_amount) {
  
}

int ParkingLot::getCount(){
    return vehicles_counter;
}

void ParkingLot::parkVehicle(Vehicle* parking_space){
    if (getCount()!=max_amount) {
        vehicles_parked[vehicles_counter] = parking_space[0];
        vehicles_counter++;
    } 
    else {
        cout << "There are no empty spaces" << endl;
    }
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
    int amount_overstay = 0;
    for (int i = 0; i < vehicles_counter; i++){
        if (vehicles_parked[i].getParkingDuration() > maxParkingDuration) {
            amount_overstay++;
        }
        return amount_overstay;
    }
}


ParkingLot::~ParkingLot(){
    delete [] vehicles_parked;
}