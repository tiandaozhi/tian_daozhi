#include <iostream>

using namespace std;
void qualityPoints();
int main()
{
    qualityPoints();
    return 0;
}
void qualityPoints()
{
    int a;
    cout<<"请输入学生成绩：";
    cin>>a;
    if(a<60)
    {
       cout<<"0"<<endl;
     }
     if(a>=60 && a<70)
     {
         cout<<"1"<<endl;
     }
     if(a>=70 && a<80)
     {
         cout<<"2"<<endl;
     }
      if(a>=80 && a<90)
      {
           cout<<"3"<<endl;
      }
        if(a>=90 && a<=100)
        {
            cout<<"4"<<endl;
        }
}
