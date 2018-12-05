#include <iostream>

using namespace std;

int main()
{  int count=0;
   int  sum=0;
    for(int a; a!=9999;)
{

    cout<<"请输入值：";
    cin>>a;
    if(a!=9999)
    {
        sum= sum +a;
        count++;
    }

}
   cout<<"平均数为："<<sum/count<<endl;
}
