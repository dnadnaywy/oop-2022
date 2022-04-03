#pragma once
#include "Car.h"
class Toyota : public Car {
  private:
    int fuel_capacity;
    int fuel_consum;
    int average_speed_rain;
    int average_speed_sunny;
    int average_speed_snow;

  public:
    Toyota();
    void Set_average_speed_rain(int speed);
    void Set_average_speed_sunny(int speed);
    void Set_average_speed_snow(int speed);
    void Set_fuel_capacity(int capacity);
    void Set_fuel_consum(int consum);
    int Get_average_speed_rain();
    int Get_average_speed_sunny();
    int Get_average_speed_snow();
    int Get_fuel_capacity();
    int Get_fuel_consum();
};
