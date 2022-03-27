#include "Number.h"
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>

using namespace std;


Number::Number(const char* value, int base) {
    this->base = base;
    number     = new char[strlen(value) + 1];
    memcpy(number, value, strlen(value));
    number[strlen(value)] = NULL;
}

Number::~Number() {
    delete number;
    number = nullptr;
}


void Number::SwitchBase(int newBase) {
    
}

int Number::GetDigitsCount() {
    return strlen(this->number);
}

int Number::GetBase() {
    return this->base;
}

void Number::Print() {
    cout << this->number << "\n";
}