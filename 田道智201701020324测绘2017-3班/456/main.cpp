#include<iostream>
using namespace std;
int main()
{
	char c;
	float len, num, sum1 = 0, sum2 = 0;
	while (true)
	{
		cout << "输入行程:";
		cin >> len;
		cout << "输入加仑:";
		cin >> num;
		cout << "每加仑可以行驶:" << len / num << "英里" << endl;
		sum1 += len, sum2 += num;
		cout << "总行程每加仑" << sum1 / sum2 << "英里"  << endl << endl;
		cout << "是否继续计算(Y/N):";
		cin >> c;
		if (c != 'y' && c != 'Y')
			break;
	}
