#include <iostream>

void func ()
{
// �곣����������ָ�Ӷ���λ�ÿ�ʼ���ļ�������������������
#define A 10

	// const ���εı��������������飬������Ϊ��ǰ{}
	const int a = 20;

#undef A
}

int main()
{
// 	printf ("A = %d\n", A);

	// printf ("a = %d\n", a);

	return 0;
}

int main1()
{
	// C++ const���α����Ժ󣬸ñ����ͱ����һ������
	// C++ ��һ�����������ű�,�����泣��
	// a �����ڳ������У�û���ڴ���
	const int a = 10;
	int *pa = (int *)&a;
	*pa = 20;

	printf ("a   = %d\n", a);
	printf ("*pa = %d\n", *pa);

	printf ("&a = %p, pa = %p\n", &a, pa);

	int arr[a];

	return 0;
}
���ܽ����� 1 ��"const int"ת��Ϊ"char *"