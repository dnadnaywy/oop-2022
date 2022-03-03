#include "NumberList.h"
#include <iostream>

void NumberList::Init() {
    this->count = 0;
}

bool NumberList::Add(int x) {
    if (count>=10)
        return false;
    this->numbers[count] = x;
    count++;
}

void NumberList::Sort() {
    int ok = 0,aux;
    while (ok==0) {
        ok = 1;
        for (int i=0;i<count-1;i++)
            if (this->numbers[i]>this->numbers[i+1]) {
                aux = this->numbers[i];
                this->numbers[i]=this->numbers[i + 1];
                this->numbers[i + 1] = aux;
                ok = 0;
            }
    }
}

void NumberList::Print() {
    for (int i = 0; i < count; i++)
        std::cout << this->numbers[i] << " ";
}
