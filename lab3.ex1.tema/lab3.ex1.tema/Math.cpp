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
    int i;
     for (i = 0; a[i] != NULL && b[i] != NULL; i++)
        aux[i] = char((a[i] + b[i])%256);
     while (a[i] != NULL) {
         aux[i] = a[i];
         i++;
     }
     while (b[i] != NULL) {
         aux[i] = b[i];
         i++;
     }
    aux[strlen(aux)] = NULL;
    return aux;
}
