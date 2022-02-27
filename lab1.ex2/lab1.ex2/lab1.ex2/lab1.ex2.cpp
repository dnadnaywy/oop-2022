// lab1.ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cstring>
int charToInt(char input[100]) {
    int n = strlen(input);
    int numar=0;
    for (int i=0;i<n;i++) {
        if (input[i] >= '0' && input[i] <='9') {
            numar = numar * 10 + (input[i] - '0');
        }
    }
    return numar;
}

int main()
{
    char input[100];
    int numar, suma = 0;
    FILE* fisier = fopen("in.txt", "r");
    if (fisier==NULL) {
        printf("fisierul nu s-a deschis!");
        return 0;
    }
    while (fgets(input,100,fisier) != NULL) {
        numar=charToInt(input) ;
        suma += numar;
    }
    printf("%i", suma);
    fclose(fisier);
    return 0;
}
