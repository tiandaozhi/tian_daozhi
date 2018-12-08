#include <iostream>

using namespace std;
void calculateCharges1();
void calculateCharges2();
void calculateCharges3();

int main()
{  int b;
   if(b<=3 && b>0)
   {
       calculateCharges1();
       }
   else if(b>3 && b<=19)
    {
        calculateCharges2();
        }
    else if(b<=24 && b>19)
    {
        calculateCharges3();
        }
  return 0;
  }
 void calculateCharges1()
{
    int a;
    double b;
    double c=2.00;
    cout<<"Car    Hours     Charge"<<endl;
    cin>>a>>b;
    cout<<                  c<<endl;
    }
void calculateCharges2()
{
    int a;
    int b;
    double c=0.5*a+0.5;
    cout<<"Car    Hours     Charge"<<endl;
    cin>>a>>b;
    cout<<                  c<<endl;
    }
void calculateCharges3()
{
    int a;
    int b;
    double c=10;
    cout<<"Car    Hours     Charge"<<endl;
    cin>>a>>b;
    cout<<                  c<<endl;
    }
