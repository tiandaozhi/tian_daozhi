#include<stdio.h>
int main()
{
	int i,t;
	char a[5];
	printf("������һ����λ����\n");
	for(i=0;i<=4;i++)
	   scanf("%c",&a[i]);
	for(i=0;i<=4;i++)
	   if(a[i]!=a[4-i])
	   { t=0;break; }
	   else t=1;
	   if(t) printf("����Ϊ��������\n");
	   else  printf("�������ǻ�������\n");
	   return 0;
}
