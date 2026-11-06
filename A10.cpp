/* Day 27 - Experiment 10
   Implement Cohen-Sutherland Line Clipping Algorithm. */

#include <iostream>
#include <graphics.h>
#include <cmath>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Clipping window boundaries
    int x_min = 100, y_min = 100;
    int x_max = 300, y_max = 300;

    // Line endpoints
    double x1, y1, x2, y2;

    cout << "Enter x1 y1 x2 y2: ";
    cin >> x1 >> y1 >> x2 >> y2;

    // Calculate region code
    auto computeCode = [&](double x, double y)
    {
        int code = 0;

        if (y < y_min)
            code |= 8;  // Top

        if (y > y_max)
            code |= 4;  // Bottom

        if (x > x_max)
            code |= 2;  // Right

        if (x < x_min)
            code |= 1;  // Left

        return code;
    };

    int code1 = computeCode(x1, y1);
    int code2 = computeCode(x2, y2);

    bool accept = false;

    while (true)
    {
        if ((code1 | code2) == 0)
        {
            accept = true;
            break;
        }
        else if ((code1 & code2) != 0)
        {
            break;
        }
        else
        {
            int code_out;
            double x, y;

            if (code1 != 0)
                code_out = code1;
            else
                code_out = code2;

            // Find intersection point
            if (code_out & 8)
            {
                x = x1 + (x2 - x1) *
                    (y_min - y1) / (y2 - y1);
                y = y_min;
            }
            else if (code_out & 4)
            {
                x = x1 + (x2 - x1) *
                    (y_max - y1) / (y2 - y1);
                y = y_max;
            }
            else if (code_out & 2)
            {
                y = y1 + (y2 - y1) *
                    (x_max - x1) / (x2 - x1);
                x = x_max;
            }
            else
            {
                y = y1 + (y2 - y1) *
                    (x_min - x1) / (x2 - x1);
                x = x_min;
            }

            // Update outside endpoint
            if (code_out == code1)
            {
                x1 = x;
                y1 = y;
                code1 = computeCode(x1, y1);
            }
            else
            {
                x2 = x;
                y2 = y;
                code2 = computeCode(x2, y2);
            }
        }
    }

    // Draw clipping window
    rectangle(x_min, y_min, x_max, y_max);

    if (accept)
    {
        // Draw clipped line
        setcolor(GREEN);

        line(round(x1), round(y1),
             round(x2), round(y2));

        cout << "Line accepted after clipping.";
    }
    else
    {
        cout << "Line rejected.";
    }

    getch();
    closegraph();

    return 0;
}
