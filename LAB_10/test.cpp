//***Bishmillahir Rahmanir Raheem***//
#include<bits/stdc++.h>
using namespace std;
#define  ll         long long
#define  ull        unsigned long long
#define  ld         long double
void iofun(){
    #ifndef ONLINE_JUDGE
    freopen("F:/My Code/input.txt", "r", stdin);
    freopen("F:/My Code/output.txt", "w", stdout);
    #endif
}
//-------Taylor_method------
double f_y1(ld x,ld y)
{
    return 3*x + (y*y);
}
double f_y2(ld y,ld y1)
{
    return 2*y*y1 + 3;
}
double f_y3(ld y,ld y1,ld y2)
{
    return 2*(y1*y1)+2*y*y2;
}
double f_y4(ld y,ld y1,ld y2,ld y3)
{
    return 6*y1*y2+2*y*y3;
}
int fac(int n)
{
    int c=1;
    for (int i = 1; i <=n ; ++i)
        c*=i;
    return c;
}
void Taylor_method(double x,double y,double h,double x_target)
{

    ld y1,y2,y3,y4;
    while(x<x_target)
    {
        y1 = f_y1(x,y);
        y2 = f_y2(y,y1);
        y3 = f_y3(y,y1,y2);
        y4 = f_y4(y,y1,y2,y3);
        double cal = y + h*(y1) + (h*h*y2)/fac(2) + (h*h*h*y3)/fac(3) + (h*h*h*h*y4)/fac(4);
        x+=h;
        y = cal;
    }

    cout << "\ny("<<x_target<<") = "<< y << endl;
}
//-------Euler_Method------
double f(double x, double y)
{
    return 3 * x + (y*y);
}
void Euler_Method(double x,double y,double h,double x_target)
{
	while(x<x_target)
    {
        double cal = y + h * f(x,y);
        x+=h;
        y = cal;
    }
    cout << "\ny(" << x_target << ") = " << y << endl;
}
//-------Heun_method------
void Heun_method(double x,double y,double h,double x_target)
{
	while(x<x_target)
	{
		double y_pred = y + h*f(x, y);
        double cal = (h/2)*(f(x, y) + f(x+h, y_pred));
        x += h;
        y = cal;
	}
	cout << "\ny(" << x_target<< ") = " << y << endl;
}
//-------Runge_Kutta_Method------
void Runge_Kutta_Method(double x,double y,double h,double x_target)
{
	    double cal,k1,k2,k3,k4,del_y;

         while(x<x_target)
         {
            k1 = h*f(x,y);
            k2 = h*f(x+(h/2),y+(k1/2));
            k3 = h*f(x+(h/2),y+(k2/2));
            k4 = h*f(x+h,y+k3);
            del_y = (double)(k1 + 2*k2 + 2*k3 + k4)/6;
            cal = y + del_y;
            x += h;
            y = cal;
         }
         cout << "\ny(" << x_target<< ") = " << y << endl;
}
int main()
{
    //iofun();
    double x0,y0,h,x_target;
    cout << "Enter x0 : ";
    cin >> x0 ;
    cout << "Enter y0 : ";
    cin >> y0 ;
    cout << "Enter h : ";
    cin >> h ;
    cout << "Enter x_target : ";
    cin >> x_target;
    while(1){
    cout << "\n\nSELECT METHOD : \n";
    cout << "1.Taylor_method\n";
    cout << "2.Euler_Method\n";
    cout << "3.Heun_method\n";
    cout << "4.Runge_Kutta_Method\n";
    cout << "5.Exit\n\n\n";
    int s;
    cout << "==> ";
    cin >> s;
    if(s==1)
    	Taylor_method(x0,y0,h,x_target);
    else if(s==2)
    	Euler_Method(x0,y0,h,x_target);
    else if(s==3)
    	Heun_method(x0,y0,h,x_target);
    else if(s==4)
    	Runge_Kutta_Method(x0,y0,h,x_target);
    else
    	break;
    }

    return 0;
}
