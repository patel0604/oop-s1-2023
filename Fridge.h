#ifndef FRIDGE_H
#define FRIDGE_H
#include "Appliance.h"

class Fridge : public Appliance{
    private:
    double volume;
    public:
    Fridge();
    Fridge(int power_rating, double volume);
    double get_volume() const;
    void set_volume(double volume);
    double get_power_consumption() override;
};

#endif