#include "Appliance.h"
#include "Fridge.h"
#include <iostream>
#include <cmath>

Fridge::Fridge() {
  volume = 0;
}

Fridge::Fridge(int powerRating, double volume): Appliance(powerRating), volume(volume) {}

double Fridge::get_volume() const {
  return volume;
}

void Fridge::set_volume(double volume) {
  this->volume = volume;
}

double Fridge::get_power_consumption() {
  return get_powerrating() * 24 * (volume / 100);
}