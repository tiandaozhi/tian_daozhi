#include <iostream>

using namespace std;



void iseven();
int main()
{
    iseven();
    return 0;
}
void iseven()
{
   int n;
    cout<<"请输入一个数:";
    cin>>n;
    int T=n%2;
    switch(T)
{
case 0:
    cout<<"true"<<endl;
    break;
case 1:
    cout<<"false"<<endl;
    break;

}

}
