#pragma once
class Car {
  private: 
	  int fuel_capacity;
      int fuel_consum;
      int average_speed_rain;
      int average_speed_sunny;
      int average_speed_snow;

  public:
      virtual void Set_fuel_capacity(int capacity) = 0;
    virtual void Set_fuel_consum(int consum)      = 0;
      virtual void Set_average_speed_rain(int speed) = 0;
      virtual void Set_average_speed_sunny(int speed) = 0;
      virtual void Set_average_speed_snow(int speed) = 0;
      virtual int Get_average_speed() = 0;
      virtual int Get_fuel_capacity()              = 0;
    virtual int Get_fuel_consum()                   = 0;
      virtual int Get_average_speed_rain()  = 0;
      virtual int Get_average_speed_sunny() = 0;
      virtual int Get_average_speed_snow()  = 0;
};
