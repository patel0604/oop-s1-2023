#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
    private:
    int power_rating;
    bool is_on;

    public:
    Appliance();

    Appliance(int power_rating);

    int get_powerrating() const;
    void set_powerrating(int power_rating);

    bool get_ison()const;
    void turn_on();
    void turn_off();

    virtual double get_power_consumption();




};

#endif