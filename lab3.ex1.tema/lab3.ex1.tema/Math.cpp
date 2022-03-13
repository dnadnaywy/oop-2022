#include "Math.h"
#include <cstdarg>
#include <cstring>
#include <iostream>

int Math::Add(int a, int b) {
    return a + b;
}

int Math::Add(int a, int b, int c) {
    return a+b+c;
}

int Math::Add(double a, double b) {
    return a+b;
}

int Math::Add(double a, double b, double c) {
    return a+b+c;
}

int Math::Mul(int a, int b) {
    return a*b;
}

int Math::Mul(int a, int b, int c) {
    return a*b*c;
}

int Math::Mul(double a, double b) {
    return a*b;
}

int Math::Mul(double a, double b, double c) {
    return a*b*c;
}

int Math::Add(int count, ...) {
    int suma = 0;
    va_list args;
    va_start(args, count);
    for (int i=0;i<count;i++) {
        int x = va_arg(args, int);
        suma = Add(suma, x);
    }
    va_end(args);
    return suma;
}

char* Math::Add(const char* a, const char* b) {
    if (a == NULL || b == NULL)
        return NULL;
    char aux[100] = "";
    int k=0;
    int carry=0;
    for (int i = strlen(a)-1, j = strlen(b)-1; i >= 0 && j >= 0; i--, j--) {
        aux[k] = (a[i] - '0' + b[j] - '0' + carry) % 10 + '0';
        k++;
        carry  = (a[i] - '0' + b[j] - '0') / 10;
    }
    aux[k] = NULL;
    for (int i=k-1;i>=0;i--)
        std::cout << aux[i];
    std::cout << '\n';
    return aux;
}
