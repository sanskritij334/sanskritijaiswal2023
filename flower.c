#include <graphics.h>
#include <conio.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    int xc = 300, yc = 240;   // center of flower
    int r = 80;               // petal distance
    int petalRadius = 60;
    int i;

    initgraph(&gd, &gm, "");  // initialize graphics

    // Draw petals
    for (i = 0; i < 360; i += 45)
    {
        int x = xc + r * cos(i * 3.14 / 180);
        int y = yc + r * sin(i * 3.14 / 180);
        circle(x, y, petalRadius);
    }

    // Draw center of flower
    setfillstyle(SOLID_FILL, YELLOW);
    circle(xc, yc, 50);
    floodfill(xc, yc, WHITE);

    // Draw stem
    line(xc, yc + 50, xc, yc + 200);

    getch();
    closegraph();
    return 0;
}
