#include "TV.h"
#include "Appliance.h"
#include <cmath>

TV::TV() {
  screen_size = 0;
}

TV::TV(int power_rating, double screen_size): Appliance(power_rating), screen_size(screen_size) {}

void TV::set_screen_size(double screenSize) {
  this->screen_size = screenSize;
}

double TV::get_screen_size() const {
  return screen_size;
}

double TV::get_power_consumption() {
  return get_powerrating() * (screen_size/10);
}