#include<stdio.h>
int main()
{
	int i,t;
	char a[5];
	printf("请输入一个五位数：\n");
	for(i=0;i<=4;i++)
	   scanf("%c",&a[i]);
	for(i=0;i<=4;i++)
	   if(a[i]!=a[4-i])
	   { t=0;break; }
	   else t=1;
	   if(t) printf("该数为回文数。\n");
	   else  printf("该数不是回文数。\n");
	   return 0;
}
