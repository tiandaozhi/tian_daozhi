#include <iostream>

using namespace std;
void changfangxing();
void  yuanzhutiji();
int main()
{
    int A=3;
    while(true)
   {
    cout<<"1��������"<<endl;
    cout<<"2��Բ��"<<endl;
    cout<<"0���˳�"<<endl;
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
   cout<<"��ӭʹ�ñ����,лл��"<<endl;
   return 0;
}
void changfangxing()
{
    double a;
    double b;
    double c;
    cout<<"���䳤���:";
    cin>>a>>b>>c;
    double V=a*b*c;
    cout<<"���Ϊ:"<<V<<endl;

}
void  yuanzhutiji()
{
    double a;
    double b;
    cout<<"����뾶�͸�:";
    cin>>a>>b;
    double V=3.14*2*a*b;
    cout<<"���Ϊ:"<<V<<endl;

}
