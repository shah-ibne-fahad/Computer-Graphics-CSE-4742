#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main()
{

    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    sector(200, 200, 0, 150, 50, 65);

    getch();

    closegraph();

    return 0;
}

