#include <iostream>
using namespace std;

int main ()
{
    int cat;
    double units,rate=0.0,TotChg,disAmt,amtPay;

    cout<<"What are you paying for :  0  - residence, 1  company  2  Gvt"<<endl;
    cin>>cat;


    switch(cat)
    {
       case 0:  {
                    rate=2.5;
                cout<<"Please indicate the units consumed  :"<<endl;
    cin>>units;
                    break;
                }
       case 1:  {
                    rate=3.8;
                cout<<"Please indicate the units consumed  :"<<endl;
    cin>>units;
                    break;
                }
        case 2: {
                    rate=1.75;
                     cout<<"Please indicate the units consumed  :"<<endl;
    cin>>units;
                    break;

                }
        default:{
                    cout<<"You gave an invalid category"<<endl;
                }
    }

    /*
    if(cat==0)
        rate=2.5;
    else if (cat==1)
        rate=3.8;
    else if (cat==2)
    {
        rate=1.75;
    }
    else
        cout<<"You gave an invalid category"<<endl;
    */
    TotChg=rate*units;
    if (units<100)
        disAmt=0;
    else if (units<=1000)
        disAmt=0.1*TotChg;
    else
        disAmt=0.135*TotChg;
    amtPay=TotChg-disAmt;
    cout<<"The rate is :"<<rate<<". Discount is :"<<disAmt<<", Total charge is :"<<TotChg<<", Amount payable is :"<<amtPay<<endl;

return 0;


}
