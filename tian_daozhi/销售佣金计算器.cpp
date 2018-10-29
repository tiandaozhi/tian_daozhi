#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double sales;
    while(222)
    {
        cout<<"Enter sales in dollars (-1 to end):";
        cin>>sales;
        if(sales==-1)break;
        cout<<"Salary is: "<<fixed<<setprecision(2)<<5000+200+sales*0.09<<endl;
        cout<<endl;
    }
}
