#include "Appliance.h"
#include <iostream>
using namespace std;

int main() {
  Appliance* appliance = new Appliance(100);  
  cout << appliance->get_powerrating() << endl;
  appliance->turn_off();
  appliance->turn_on();
  cout << appliance->get_power_consumption() << endl;
  delete appliance;

  return 0;
}