#include <iostream>
#include "Fridge.h"
#include "TV.h"
#include "House.h"
#include "Appliance.h"
using namespace std;
int main() {
  House house(2);

  Appliance* tv = new TV(55,110);
  Fridge* fridge = new Fridge(50,100);

  house.add_appliance(tv);
  house.add_appliance(fridge);

  cout << "Total consumption: " << house.get_total_power_consumption() << endl;

  delete tv;
  delete fridge; 

  return 0;
}