/* Day 26 - Experiment 8
Write a C++ program to draw a line using DDA algorithm and a circle using Bresenham's Circle Drawing algorithm.*/

#include <iostream>
#include <graphics.h>
#include <cmath>
#include <algorithm>
#include <conio.h>
using namespace std;

void DDA(int x1, int y1, int x2, int y2)
{
    int dx = x2 - x1;
    int dy = y2 - y1;

    int steps = max(abs(dx), abs(dy));
    if (steps == 0)
    {
        putpixel(x1, y1, WHITE);
        return;
    }
    float xinc = (float)dx / steps;
    float yinc = (float)dy / steps;

    float x = x1;
    float y = y1;

    for (int i = 0; i <= steps; i++)
    {
        putpixel(round(x), round(y), WHITE);
        x = x + xinc;
        y = y + yinc;
    }
}

void BresenhamCircle(int xc, int yc, int r)
{
    int x = 0;
    int y = r;
    int p = 3 - 2 * r;

    while (x <= y)
    {
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);

        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - y, yc + x, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc - y, yc - x, WHITE);

        if (p < 0)
            p = p + 4 * x + 6;
        else
        {
            p = p + 4 * (x - y) + 10;
            y--;
        }

        x++;
    }
}

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, NULL);

    // Draw line using DDA
    DDA(100, 100, 300, 200);

    // Draw circle using Bresenham
    BresenhamCircle(400, 300, 100);

    getch();
    closegraph();

    return 0;
}