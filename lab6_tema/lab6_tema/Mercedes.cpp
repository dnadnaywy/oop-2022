#include "Mercedes.h"

Mercedes::Mercedes() {
    Set_average_speed_rain(0);
    Set_average_speed_sunny(0);
    Set_average_speed_snow(0);
    Set_fuel_capacity(0);
    Set_fuel_consum(0);
}

void Mercedes::Set_average_speed_rain(int speed) {
    average_speed_rain = speed;
}

void Mercedes::Set_average_speed_sunny(int speed) {
    average_speed_sunny = speed;
}

void Mercedes::Set_average_speed_snow(int speed) {
    average_speed_snow = speed;
}

void Mercedes::Set_fuel_capacity(int capacity) {
    fuel_capacity = capacity;
}

void Mercedes::Set_fuel_consum(int consum) {
    fuel_consum = consum;
}

int Mercedes::Get_average_speed_rain() {
    return average_speed_rain;
}

int Mercedes::Get_average_speed_sunny() {
    return average_speed_sunny;
}

int Mercedes::Get_average_speed_snow() {
    return average_speed_snow;
}

int Mercedes::Get_fuel_capacity() {
    return fuel_capacity;
}

int Mercedes::Get_fuel_consum() {
    return fuel_consum;
}
