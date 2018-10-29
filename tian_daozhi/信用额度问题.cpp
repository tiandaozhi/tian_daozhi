#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double number,balance,charges,credits,limit,Nbalance;
    while(666)
    {
     cout<<"Enter account number (or -1 to quit):";
     cin>>number;
     if(number==-1)break;
     cout<<"Enter beginning balance:";
     cin>>balance;
     cout<<"Enter total changes:";
     cin>>charges;
     cout<<"Enter total credits:";
     cin>>credits;
     cout<<"Enter credit limit:";
     cin>>limit;
     Nbalance = balance + charges - credits;
     cout<<"New balance is  "<<Nbalance<<endl;
     if(Nbalance>limit)
     {
         cout<<"Account        "<<number<<endl;
         cout<<"Credits limit: "<<fixed<<setprecision(2)<<limit<<endl;
         cout<<"Balance:       "<<fixed<<setprecision(2)<<Nbalance<<endl;
         cout<<"Credit Limit Exceeded."<<endl;
     }
     cout<<endl;
    }
    return 0;
}
