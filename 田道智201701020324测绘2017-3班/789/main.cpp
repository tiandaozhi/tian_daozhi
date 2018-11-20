#include<iostream>
using namespace std;
int main()
{
	long long a, b, c=1,d=0;
	while (c <= 10)
	{
		cout << "请输入第" << c << "数：";
		cin >> b;
		if (b >= d)
			d = b;
		c = c + 1;
	}
	cout << "最大值为：" << d<<endl;
	system("pause");
	return 0;
}
