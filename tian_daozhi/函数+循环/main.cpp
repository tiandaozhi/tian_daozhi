#include <iostream>

using namespace std;
void changfangxing();
void  yuanzhutiji();
int main()
{
    int A=3;
    while(true)
   {
    cout<<"1、长方形"<<endl;
    cout<<"2、圆柱"<<endl;
    cout<<"0、退出"<<endl;
    cin>>A;
   switch(true)
   {
       case 1:
        changfangxing();
            break;
       case 2:
          yuanzhutiji();
            break;
}
   }
   cout<<"欢迎使用本软件,谢谢！"<<endl;
   return 0;
}
void changfangxing()
{
    double a;
    double b;
    double c;
    cout<<"请输长宽高:";
    cin>>a>>b>>c;
    double V=a*b*c;
    cout<<"体积为:"<<V<<endl;

}
void  yuanzhutiji()
{
    double a;
    double b;
    cout<<"请输半径和高:";
    cin>>a>>b;
    double V=3.14*2*a*b;
    cout<<"体积为:"<<V<<endl;

}
