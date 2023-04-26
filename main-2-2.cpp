#include <iostream>
#include "TV.h"
#include "Appliance.h"
using namespace std;
int main() {
  TV tv(55,110);
  cout << "Power consumption when off: " << tv.get_power_consumption() << endl;

  tv.turn_on();
  cout << "Power consumption when on: " << tv.get_power_consumption() << endl;

  tv.set_screen_size(300);
  cout << "Power consumption with bigger volume: " << tv.get_power_consumption() << endl;

  tv.turn_off();
  cout << "Power consumption when off: " << tv.get_power_consumption() << endl;

  return 0;
}