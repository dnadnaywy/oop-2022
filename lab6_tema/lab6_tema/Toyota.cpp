#include "Toyota.h"

Toyota::Toyota() {
    Set_average_speed_rain(0);
    Set_average_speed_sunny(0);
    Set_average_speed_snow(0);
    Set_fuel_capacity(0);
    Set_fuel_consum(0);
}

void Toyota::Set_average_speed_rain(int speed) {
    average_speed_rain = speed;
}

void Toyota::Set_average_speed_sunny(int speed) {
    average_speed_sunny = speed;
}

void Toyota::Set_average_speed_snow(int speed) {
    average_speed_snow = speed;
}

void Toyota::Set_fuel_capacity(int capacity) {
    fuel_capacity = capacity;
}

void Toyota::Set_fuel_consum(int consum) {
    fuel_consum = consum;
}

int Toyota::Get_average_speed_rain() {
    return average_speed_rain;
}

int Toyota::Get_average_speed_sunny() {
    return average_speed_sunny;
}

int Toyota::Get_average_speed_snow() {
    return average_speed_snow;
}

int Toyota::Get_fuel_capacity() {
    return fuel_capacity;
}

int Toyota::Get_fuel_consum() {
    return fuel_consum;
}
