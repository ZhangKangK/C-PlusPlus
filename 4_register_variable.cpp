#include <stdio.h>

int main()
{
	// �Ĵ���������ֵ���ڼĴ�����
	register int i = 10;


	printf ("i = %d\n", i);

	// C++ ��һ����һ���Ĵ�������ȡ��ַ����üĴ�����������������Ч�����Ϊһ����ͨ����
	printf ("&i = %p\n", &i);
	return 0;
}