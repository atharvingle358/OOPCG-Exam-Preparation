
/* Day 27 - Experiment 11
   Draw a 2D object and perform Scaling,
   Translation and Rotation. */

#include <graphics.h>
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Original rectangle coordinates
    int x[] = {100, 200, 200, 100};
    int y[] = {100, 100, 200, 200};

    // Draw original rectangle
    setcolor(WHITE);
    for (int i = 0; i < 4; i++)
    {
        line(x[i], y[i], x[(i + 1) % 4], y[(i + 1) % 4]);
    }

    // Scaling
    double sx = 1.5, sy = 1.5;

    setcolor(RED);
    for (int i = 0; i < 4; i++)
    {
        line(x[i] * sx, y[i] * sy,
             x[(i + 1) % 4] * sx,
             y[(i + 1) % 4] * sy);
    }

    // Translation
    int tx = 50, ty = 50;

    setcolor(GREEN);
    for (int i = 0; i < 4; i++)
    {
        line(x[i] + tx, y[i] + ty,
             x[(i + 1) % 4] + tx,
             y[(i + 1) % 4] + ty);
    }

    // Rotation
    double angle = 45;
    double rad = angle * 3.14159 / 180;

    int centerX = 150;
    int centerY = 150;

    int rx[4], ry[4];

    for (int i = 0; i < 4; i++)
    {
        rx[i] = centerX +
                (x[i] - centerX) * cos(rad) -
                (y[i] - centerY) * sin(rad);

        ry[i] = centerY +
                (x[i] - centerX) * sin(rad) +
                (y[i] - centerY) * cos(rad);
    }

    setcolor(BLUE);

    for (int i = 0; i < 4; i++)
    {
        line(rx[i], ry[i],
             rx[(i + 1) % 4], ry[(i + 1) % 4]);
    }

    getch();
    closegraph();

    return 0;
}
