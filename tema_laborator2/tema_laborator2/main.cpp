#include <iostream>
#include "NumberList.h"

int main()
{
    NumberList p;
    int n, x; //n este nr de numere citit de la tastaura, x vor fi nr citite
    std::cin >> n;
    p.Init();
    for (int i = 0; i < n; i++) {
        std::cin >> x;
        p.Add(x);
    }
    p.Sort();
    p.Print();
    return 0;

}
