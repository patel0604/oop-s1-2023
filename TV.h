#ifndef TV_H
#define TV_H
#include "Appliance.h"

class TV: public Appliance {
  private:
    double screen_size;
  public:
    TV();
    TV(int power_rating, double screen_size);
    void set_screen_size(double screen_size);
    double get_screen_size() const;
    double get_power_consumption();
};

#endif