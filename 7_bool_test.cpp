#include <iostream>
using namespace std;
#if 0
bool ���� ��C++һ���µ����ͣ� ����ֵֻ������
true  : �����棬 ֵ��1     ���з�0������
false : ����٣� ֵ��0       
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

	// bool���͵��ж����
	// �ж���
	// if (b == true)
	if (b)
	{
	}

	// �жϼ�
	// if (b == false)
	if (!b)
	{

	}
	


	return 0;
}