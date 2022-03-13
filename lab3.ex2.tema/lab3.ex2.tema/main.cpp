#include <iostream>
#include "Canvas.h"

using namespace std;

int main()
{
    Canvas canvas(50, 50);
    //canvas.DrawRect(2, 2, 20, 30,'-');
    //canvas.FillRect(2, 2, 20, 30,'1');
    canvas.DrawCircle(10, 10, 5, '.');
    canvas.FillCircle(10, 10, 5, '.');
    canvas.Print();
}