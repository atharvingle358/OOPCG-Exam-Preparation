/* Day 28 - Experiment 12
Write a C++ program to create a bouncing ball animation using a sine waveform*/

#include <iostream>
#include <graphics.h>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 300, y;
    int radius = 30;

    double angle = 0;

    while (!kbhit())
    {
        cleardevice();

        y = 300 - 150 * abs(sin(angle));

        setcolor(WHITE);
        circle(x, y, radius);

        angle = angle + 0.1;

        delay(30);
    }

    closegraph();
    return 0;
}