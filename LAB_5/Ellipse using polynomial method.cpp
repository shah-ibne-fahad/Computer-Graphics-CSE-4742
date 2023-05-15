#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;
void plot4pixels(int x,int y,int h,int k)
{
    putpixel(x+h,y+k,8);
    putpixel(x+h,-y+k,8);
    putpixel(-x+h,y+k,8);
    putpixel(-x+h,-y+k,8);
}
int main()
{
    int x,y,r,i,h,k,a,b;
    a=50;
    b=30;
    x=0;
    y=30;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setbkcolor(GREEN);
    while(x<a)
    {
        plot4pixels(x,y,200,200);
        x++;
        y=b*sqrt(((a*a)-(x*x*1.0))/(a*a));
    }
     plot4pixels(x,y,200,200);
    setcolor(8);
    getch();
}
