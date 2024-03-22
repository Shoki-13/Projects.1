#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main ()
{
    int a,b,c;
    double x1,x2;
    int d;
    system("CLS");
    system("color 2F");
    cout<<"Please enter the coeff   :"<<endl;
    cin>>a>>b>>c;
    d=pow(b,2)-4*a*c;
    if (d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        cout<<"The two roots are  :"<<x1<<"  and "<<x2<<endl;
        system("PAUSE");
    }
    else if (d==0)
    {
        x1=-b/(2*a);
        cout<<"The one repeated root is :"<<x1<<endl;
        system("PAUSE");
    }
    else
    {
        cout<<"There are no real roots to this equation "<<endl;
        system("PAUSE");
    }
}
