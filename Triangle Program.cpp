#include <iostream>
using namespace std;

int main ()
{
    double base,iheight,iArea;

    cout<<"Please enter the base of your triangle :";
    cin>>base;
    cout<<"Please enter the height of your triangle :";
    cin>>iheight;
    iArea  = 0.5*base*iheight;
    cout<<"The area of this triangle is :"<<iArea;

    return 0;
}
