#if 0
#include <stdio.h>
#include <iostream>
namespace std
{
	// ԭ���Ĵ���
}

// namespace ��C++��һ���ؼ��֣��������������ռ�
// ����һ�������ռ䣬��������ռ����ֽ�NameA
// �����ռ���Ե�ȫ�ֿռ�ʹ�ã�������Զ���������������ꡢ�ṹ�塣����������
namespace NameA
{
	int len;
	int a;
	int b;
	namespace NameB
	{
		int b;
		int add(int a, int b)
		{
			return a +b;
		}
	}
}

int len;  // ȫ�ֵ�len

// using ����Ч��Χ
int main()
{
	{
		using namespace NameA;  // ��仰����Ч��Χ�ǵ�ǰ��{}
		a = 20;
	}
	{
		// ֻʹ�� NameA�еı���a,��˼��֮�����û��ָ�������ռ�ı��� a  ʹ��NameA�е�a
		// NameA������������ʹ�û�����Ҫ ������
		using NameA::a;   

		a = 20;  // ��ȷ
		// b = 30;  // ���󣬱���ָ�������ռ�
	}
	// printf ("a = %d\n", a);
	return 0;
}

// �����ռ��Ƕ��
int main4()
{
	int a = 10;
	int b = 20;

	printf ("a + b = %d\n", NameA::NameB::add(a, b));

	return 0;
}

// �����ռ���Ĭ�Ͽռ��ͻ
int main3()
{
	len = 20;   // ȫ�ֵ�len

	using namespace NameA;
	// ���ò���ȷ
	// len = 20;

	// ����취����ȷ�����ռ�
	NameA::len = 10;  // NameA

	printf ("Ĭ�������ռ� len = %d\n", ::len);  // ��Ĭ�������ռ�ı���


	return 0;
}

// ͨ��using �ؼ���
int main2()
{
	// �����������ռ�NameA����˼�����֮��ı���û��ָ�������ռ�
	// Ĭ��ʹ��NameA�еı���
	using namespace NameA;

	// len û��ָ�������ռ䣬������֮ǰ������using namespace NameA;
	// ������ NameA �е� len
	// len = 100;  

	printf ("len = %d\n", NameA::len);

	return 0;
}

// �����ռ��ʹ��1��ͬ�� �����ռ�����+::(�������) �����ڲ�������
int main1()
{
	// ʹ�������ռ�NameA�е�len
	NameA::len = 10;

	printf ("len = %d\n", NameA::len);


	return 0;
}

#endif