#pragma once
#include "Car.h"
#include "Dacia.h"
#include "Ford.h"
#include "Mazda.h"
#include "Mercedes.h"
#include "Toyota.h"
#include "Weather.h"
class Circuit {
    Car* cars[100];
    int lungime;
    int nr_cars = 0;
    int not_finish[100] = { 0 };
    Weather weather;

  public:
    void SetLength(int length);
    void SetWeather(Weather weather);
    void AddCar(Car* car);
    void Race();
    void ShowFinalRanks();
    void ShowWhoDidNotFinish();
};
