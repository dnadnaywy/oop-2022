#include <iostream>
#include "Sort.h"
using namespace std;
int main()
{
    int n;
    int minim, maxim;
    //char vect[100];
    cin >> n >> minim >> maxim;
    Sort p = {n,minim,maxim};
    //p.BubbleSort(1);
    //p.QuickSort(1,0,n-1);
    cout << "Vector cu elemente random intre minim si maxim cu InsertSort: \n";
    p.InsertSort(1);
    p.Print();
    cout << '\n';

    int a[100];
    cin>>n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Vector cu n si elemente date de la consola cu QuickSort: \n";
    Sort q = { a, n};
    q.QuickSort(1,0,n-1);
    q.Print();
    cout << '\n';

    char vect[100];
    cin >> vect;
    cout << "String cu n si elemente date de la consola cu BubbleSort: \n";
    Sort z = { vect };
    z.BubbleSort(0);
    z.Print();

}
/*
5
10 34
Vector cu elemente random intre minim si maxim cu InsertSort:
15 23 25 25 27
5
6 5 4 3 2
Vector cu n si elemente date de la consola cu QuickSort:
2 3 4 6 5
12,25,45,1,2
String cu n si elemente date de la consola cu BubbleSort:
45 25 12 2 1
*/