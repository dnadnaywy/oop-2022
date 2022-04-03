#include "Mazda.h"

Mazda::Mazda() {
    Set_average_speed_rain(0);
    Set_average_speed_sunny(0);
    Set_average_speed_snow(0);
    Set_fuel_capacity(0);
    Set_fuel_consum(0);
}

void Mazda::Set_average_speed_rain(int speed) {
    average_speed_rain = speed;
}

void Mazda::Set_average_speed_sunny(int speed) {
    average_speed_sunny = speed;
}

void Mazda::Set_average_speed_snow(int speed) {
    average_speed_snow = speed;
}

void Mazda::Set_fuel_capacity(int capacity) {
    fuel_capacity = capacity;
}

void Mazda::Set_fuel_consum(int consum) {
    fuel_consum = consum;
}

int Mazda::Get_average_speed_rain() {
    return average_speed_rain;
}

int Mazda::Get_average_speed_sunny() {
    return average_speed_sunny;
}

int Mazda::Get_average_speed_snow() {
    return average_speed_snow;
}

int Mazda::Get_fuel_capacity() {
    return fuel_capacity;
}

int Mazda::Get_fuel_consum() {
    return fuel_consum;
}
