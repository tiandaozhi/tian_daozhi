#include <iostream>

using namespace std;

int main()

{
int b;
int c;
int sum=0;
cout<<"请输入个数:";
cin>>b;
    for(int a=0;a<b;a++)
    {
        cout<<"请输入数字；";
        cin>>c;
        sum=sum+c;
    } cout<<"平均数为："<<sum<<endl;

    return 0;
}
