#include <iostream>
#include "Appliance.h"
#include "Fridge.h"
using namespace std;

int main() {
  Fridge fridge(100,200);
  cout << "Power consumption when off: " << fridge.get_power_consumption() << endl;

  fridge.turn_on();
  cout << "Power consumption when on: " << fridge.get_power_consumption() << endl;

  fridge.set_volume(300);
  cout << "Power consumption with bigger volume: " << fridge.get_power_consumption() << endl;

  fridge.turn_off();
  cout << "Power consumption when off: " << fridge.get_power_consumption() << endl;

  return 0;
}