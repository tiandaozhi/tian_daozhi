#include <iostream>

using namespace std;

int main()
{
   int nums[]{8,4,2,1,23,344,12};
   int numsLen=sizeof(nums)/sizeof(int);
   int sum=0;
   for(int i=0;i<numsLen;i++)
   {
       cout<<nums[i]<<'\t';
   }
   cout<<endl;
   for(int i=0;i<numsLen;i++)
   {
       sum=sum+nums[i];

   }
 cout<<"����ĺ�Ϊ:"<< sum <<"\t�����ƽ��ֵΪ:"<<sum/numsLen<<endl;
return 0;
}
