/* Day 26 - Experiment 9
Write a C++ program to fill a concave polygon using the Seed Fill Algorithm or Scan Line Fill Algorithm.*/

#include <iostream>
#include <graphics.h>
#include <conio.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw a concave polygon
    int poly[] = {100, 100,
                  200, 50,
                  300, 100,
                  250, 200,
                  150, 200, 
                  100, 100};

    setcolor(WHITE);
    drawpoly(6, poly);

    // Seed fill algorithm
    int seedX = 200; // Seed point inside the polygon
    int seedY = 150;
    int fillColor = RED;

    // Set fill colour
    setfillstyle(SOLID_FILL, fillColor);

    // Fill the polygon using flood fill
    floodfill(seedX, seedY, WHITE);

    getch();
    closegraph();
    return 0;
}