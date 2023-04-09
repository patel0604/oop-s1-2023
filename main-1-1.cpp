#include <iostream>
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include <string>
using namespace std;

int main(){
    int amount=0;
    cout<<"How many vehicles need to be parked"<<endl;
    cin>>amount;
    Vehicle* parked_vehicles = new Vehicle[amount];
    string* type_input = new string[1];
    string* type_of_vehicle = new string[amount];

    for (int i = 0; i < amount; i++) {
        cout << "What type of vehicle do you wish to park " << endl;
        cin >> type_input[0];
        if (type_input[0] == "Car") {
            parked_vehicles[i] = Car(i);
            type_of_vehicle[i] = "Car";
        } 
        else if (type_input[0] == "Bus") {
            parked_vehicles[i] = Bus(i);
            type_of_vehicle[i] = "Bus";
        } 
        else if (type_input[0] == "Motorbike") {
            parked_vehicles[i] =  Motorbike(i);
            type_of_vehicle[i] = "Motorbike";
        } 
        else {
            cout << "Please enter Car, Bus or Motorbike" << endl;
        }
    }

    for (int i=0;i<amount;i++) {
    cout << "Your " << type_of_vehicle[i]<< " with the ID: " << parked_vehicles[i].getID() << " has been parked for " << parked_vehicles[i].getParkingDuration() << "seconds" << endl;
    }
}
