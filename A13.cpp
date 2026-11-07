/* Day 28 - Experiment 13
Write a C++ program to draw a Koch curve fractal pattern.*/

#include <iostream>
#include <graphics.h>
#include <cmath>
#include <conio.h>
using namespace std;

void koch(double x1, double y1, double x2, double y2, int n)
{
    if (n == 0)
    {
        line(x1, y1, x2, y2);
        return;
    }

    double x3 = (2 * x1 + x2) / 3;
    double y3 = (2 * y1 + y2) / 3;

    double x4 = (x1 + 2 * x2) / 3;
    double y4 = (y1 + 2 * y2) / 3;

    double x5 = (x3 + x4) / 2 -
             (y4 - y3) * 0.866;

    double y5 = (y3 + y4) / 2 +
             (x4 - x3) * 0.866;

    koch(x1, y1, x3, y3, n - 1);
    koch(x3, y3, x5, y5, n - 1);
    koch(x5, y5, x4, y4, n - 1);
    koch(x4, y4, x2, y2, n - 1);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setcolor(WHITE);

    koch(100, 300, 500, 300, 3);

    getch();
    closegraph();

    return 0;
}