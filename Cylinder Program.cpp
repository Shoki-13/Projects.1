#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    double p =3.142;
    double r;
    int h;
    double V;
    cout<<"Please give the radius of your cylinder  :";
    cin>>r;
 //   V=sqrt(r);
    cout<<"Please give the height of your cylinder  :";
    cin>>h;
    V=p*pow(r,2)*h;
    cout<<"The volume of this cylinder is  :"<<V;
    return 0;
}
