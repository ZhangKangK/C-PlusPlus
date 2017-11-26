#include <iostream>
using namespace std;
#if 0
bool 类型 是C++一种新的类型， 它的值只有两个
true  : 代表真， 值是1     所有非0都是真
false : 代表假， 值是0       
#endif

int main()
{
	float a = 0.0000000000001;
	cout << a << endl;
	if (a - 0.000001 < 0 && a + 0.000001 > 0)
	{
		cout << "0" << endl;
	}
	else
		cout << "AAA" << endl;

	return 0;
}

int main1()
{
	bool b = true;
	cout << b << endl;

	int a = 1;
	b = a;
	cout << b << endl;
	
	b = a - 2;
	cout << b << endl;

	b = b + 1;
	cout << b << endl;

	b = -1;
	b++;
	cout << b << endl;

	// bool类型的判断语句
	// 判断真
	// if (b == true)
	if (b)
	{
	}

	// 判断假
	// if (b == false)
	if (!b)
	{

	}
	


	return 0;
}