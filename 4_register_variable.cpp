#include <stdio.h>

int main()
{
	// 寄存器变量，值存在寄存器中
	register int i = 10;


	printf ("i = %d\n", i);

	// C++ 中一旦对一个寄存器变量取地址，则该寄存器变量的声明将无效，会变为一个普通变量
	printf ("&i = %p\n", &i);
	return 0;
}