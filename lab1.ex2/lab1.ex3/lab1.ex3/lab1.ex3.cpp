// lab1.ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

void sortare(char a[100][100],int n) {
    int ok = 0;
    char aux[100];
    while (ok==0) {
        ok = 1;
        for (int i=0;i<n-1;i++)
            if (strlen(a[i]) < strlen(a[i+1])) {
                ok = 0;
                strcpy(aux, a[i]);
                strcpy(a[i], a[i+1]);
                strcpy(a[i + 1], aux);
            } else if (strlen(a[i]) == strlen(a[i + 1])) {
                if (strcmp(a[i], a[i+1])>0) {
                    ok = 0;
                    strcpy(aux, a[i]);
                    strcpy(a[i], a[i + 1]);
                    strcpy(a[i + 1], aux);
                }
            }
    }
}


int main()
{
    char input[100], cuv[100];
    char mat[100][100];
    int n = 0;
    scanf("%[^\n]s", input);
    char* p;
    p = strtok(input, " ");
    while (p!=NULL) {
        strcpy(cuv, p);
        //printf("%s\n" ,p);
        strcpy(mat[n], cuv);
        n++;
        p = strtok(NULL, " ");
    }

    sortare(mat, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", mat[i]);
    }
    return 0;
}
