#include <iostream>
using namespace std;
int main()
{
   char s;
   int sum=0;
   while(cin>>s)
   {
       sum=sum*2+(s-48);
   }
   cout<<sum;
   return 0;
}
