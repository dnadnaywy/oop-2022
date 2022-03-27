#pragma once
#include <cstring>
using namespace std;

class Number {
    char* number;
    int base;

  public:
    Number(const char* value, int base); // where base is between 2 and 16
    ~Number();

    bool operator>(const Number& n);
    bool operator<(const Number& n);
    bool operator<=(const Number& n);
    bool operator>=(const Number& n);
    bool operator==(const Number& n);;

    void SwitchBase(int newBase);
    void Print();
    int GetDigitsCount(); // returns the number of digits for the current number
    int GetBase();        // returns the current base
};