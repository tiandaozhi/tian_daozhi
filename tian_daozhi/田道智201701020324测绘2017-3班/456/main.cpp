#include<iostream>
using namespace std;
int main()
{
	char c;
	float len, num, sum1 = 0, sum2 = 0;
	while (true)
	{
		cout << "�����г�:";
		cin >> len;
		cout << "�������:";
		cin >> num;
		cout << "ÿ���ؿ�����ʻ:" << len / num << "Ӣ��" << endl;
		sum1 += len, sum2 += num;
		cout << "���г�ÿ����" << sum1 / sum2 << "Ӣ��"  << endl << endl;
		cout << "�Ƿ��������(Y/N):";
		cin >> c;
		if (c != 'y' && c != 'Y')
			break;
	}
