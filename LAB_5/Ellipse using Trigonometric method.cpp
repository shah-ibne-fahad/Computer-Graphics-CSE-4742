#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;
void plot4pixels(int,int,int,int);
int main()
{
    int x,y,x1,y1,a,b,h,k,theta;
    float p=3.14159/180;

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setbkcolor(WHITE);
    for(theta=0; theta<=90; theta++)
    {
        x1=50*cos(theta*p);
        y1=30*sin(theta*p);
        x=int(x1+0.5);
        y=int(y1+0.5);
        plot4pixels(x,y,200,200);
    }
    setcolor(8);
    getch();
    closegraph();
}
void plot4pixels(int x,int y,int h,int k)
{
    putpixel(x+h,y+k,8);
    putpixel(x+h,-y+k,8);
    putpixel(-x+h,y+k,8);
    putpixel(-x+h,-y+k,8);
}

