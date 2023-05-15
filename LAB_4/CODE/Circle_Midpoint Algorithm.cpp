#include<graphics.h>
#include<bits/stdc++.h>
#include<math.h>
 void plot8pixel(int x,int y,int h,int k)
{
    putpixel(x+h,y+k,8);
    putpixel(x+h,-y+k,8);
    putpixel(-x+h,y+k,8);
    putpixel(-x+h,-y+k,8);
    putpixel(y+h,x+k,8);
    putpixel(y+h,-x+k,8);
    putpixel(-y+h,x+k,8);
    putpixel(-y+h,-x+k,8);
}
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setbkcolor(WHITE);
    int x,y,r,d,h,k,theta;
    h=200;
    k=200;
    r=100;
    x=0;
    y=r;
    d=3-(2*r);
    while(x<=y)
    {
        plot8pixel(x,y,h,k);
        if(d<0) d=d+(2*x)+3;
        else
        {
            d=d+(2*(x-y))+5;
            y--;
        }
        x++;
    }
    getch();
    closegraph();
}
