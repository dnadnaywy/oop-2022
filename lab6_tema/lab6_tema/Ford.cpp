#include "Ford.h"

Ford::Ford() {
    Set_average_speed_rain(0);
    Set_average_speed_sunny(0);
    Set_average_speed_snow(0);
    Set_fuel_capacity(0);
    Set_fuel_consum(0);
}

void Ford::Set_average_speed_rain(int speed) {
    average_speed_rain = speed;
}

void Ford::Set_average_speed_sunny(int speed) {
    average_speed_sunny = speed;
}

void Ford::Set_average_speed_snow(int speed) {
    average_speed_snow = speed;
}

void Ford::Set_fuel_capacity(int capacity) {
    fuel_capacity = capacity;
}

void Ford::Set_fuel_consum(int consum) {
    fuel_consum = consum;
}

int Ford::Get_average_speed_rain() {
    return average_speed_rain;
}

int Ford::Get_average_speed_sunny() {
    return average_speed_sunny;
}

int Ford::Get_average_speed_snow() {
    return average_speed_snow;
}

int Ford::Get_fuel_capacity() {
    return fuel_capacity;
}

int Ford::Get_fuel_consum() {
    return fuel_consum;
}
