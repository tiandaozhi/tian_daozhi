#include<iostream>
using namespace std;
int main()
{
	long long a, b, c=1,d=0;
	while (c <= 10)
	{
		cout << "�������" << c << "����";
		cin >> b;
		if (b >= d)
			d = b;
		c = c + 1;
	}
	cout << "���ֵΪ��" << d<<endl;
	system("pause");
	return 0;
}
