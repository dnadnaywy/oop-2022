#include "Circuit.h"
#include <iostream>

void Circuit::SetLength(int length) {
    lungime = length;
}

void Circuit::SetWeather(Weather weather) {
    this->weather = weather;
}

void Circuit::AddCar(Car* car) {
    //cars[nr_cars++] = car;
}

void Circuit::Race() {
}

void Circuit::ShowFinalRanks() {
}

void Circuit::ShowWhoDidNotFinish() {
    for (int i=0;i<nr_cars;i++) {
        if (not_finish[i]==1) {
            std::cout << "did not finish\n";
        }
    }
}
