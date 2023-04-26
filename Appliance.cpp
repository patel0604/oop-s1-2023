#include "Appliance.h";
#include <iostream>

Appliance :: Appliance(){
    int power_rating = 0;
    bool is_on = false;
}

Appliance :: Appliance(int power_rating){
    this->power_rating = power_rating;
    is_on = false;

}

int Appliance :: get_powerrating() const{
    return power_rating;
}

void Appliance :: set_powerrating(int power_rating){
    this->power_rating = power_rating;
}

bool Appliance :: get_ison()const{
    return is_on;
}

void Appliance :: turn_on(){
    is_on=true;
}

void Appliance :: turn_off(){
    is_on=false;
}

double Appliance :: get_power_consumption() {
    return 0.0;
}