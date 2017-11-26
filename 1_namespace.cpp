#if 0
#include <stdio.h>
#include <iostream>
namespace std
{
	// 原来的代码
}

// namespace 是C++的一个关键字，用来定义命名空间
// 定义一个命名空间，这个命名空间名字叫NameA
// 命名空间可以当全局空间使用，里面可以定义变量，函数、宏、结构体。。。。。。
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

int len;  // 全局的len

// using 的有效范围
int main()
{
	{
		using namespace NameA;  // 这句话的有效范围是当前的{}
		a = 20;
	}
	{
		// 只使用 NameA中的变量a,意思是之后出现没有指定命名空间的变量 a  使用NameA中的a
		// NameA中其他变量的使用还是需要 加名称
		using NameA::a;   

		a = 20;  // 正确
		// b = 30;  // 错误，必须指明命名空间
	}
	// printf ("a = %d\n", a);
	return 0;
}

// 命名空间的嵌套
int main4()
{
	int a = 10;
	int b = 20;

	printf ("a + b = %d\n", NameA::NameB::add(a, b));

	return 0;
}

// 命名空间与默认空间冲突
int main3()
{
	len = 20;   // 全局的len

	using namespace NameA;
	// 调用不明确
	// len = 20;

	// 解决办法，明确命名空间
	NameA::len = 10;  // NameA

	printf ("默认命名空间 len = %d\n", ::len);  // 用默认命名空间的变量


	return 0;
}

// 通过using 关键字
int main2()
{
	// 开放了命名空间NameA，意思是如果之后的变量没有指明命名空间
	// 默认使用NameA中的变量
	using namespace NameA;

	// len 没有指明命名空间，但是在之前声明了using namespace NameA;
	// 所以用 NameA 中的 len
	// len = 100;  

	printf ("len = %d\n", NameA::len);

	return 0;
}

// 命名空间的使用1：同个 命名空间名称+::(域解析符) 引用内部的内容
int main1()
{
	// 使用命名空间NameA中的len
	NameA::len = 10;

	printf ("len = %d\n", NameA::len);


	return 0;
}

#endif