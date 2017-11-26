#include <iostream>

void func ()
{
// 宏常量作用域是指从定义位置开始到文件结束，或者主动撤销
#define A 10

	// const 修饰的变量会做作用域检查，作用域为当前{}
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
	// C++ const修饰变量以后，该变量就变成了一个常量
	// C++ 有一个常量表（符号表）,用来存常量
	// a 被存在常量表中，没在内存中
	const int a = 10;
	int *pa = (int *)&a;
	*pa = 20;

	printf ("a   = %d\n", a);
	printf ("*pa = %d\n", *pa);

	printf ("&a = %p, pa = %p\n", &a, pa);

	int arr[a];

	return 0;
}
不能将参数 1 从"const int"转换为"char *"