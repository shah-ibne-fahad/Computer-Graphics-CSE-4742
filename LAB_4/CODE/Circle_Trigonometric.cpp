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
    int x,y,x1,y1,r,h,k,theta;
    float n=3.14159/180;
    h=200;k=200;r=100;
    for(theta=0; theta<=45; theta++)
    {
        x1=r*cos(theta*n);
        y1=r*sin(theta*n);
        x=int(x1+0.5);
        y=int(y1+0.5);
        plot8pixel(x,y,h,k);
    }
    getch();
    closegraph();
}
