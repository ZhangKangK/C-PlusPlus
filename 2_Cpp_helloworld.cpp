// iostream 是C++控制台输入输出，定义一些输入输出相关的对象
#include <iostream>

// 使用标准的命名空间 std
using namespace std;

// cin
int main()
{
	int i;
	// cin 标准输入
	// >> 数据从左边流到右边，左边是标准输入，也就是键盘数据，右边是变量
	// 数据从标准输入 流到 变量 i 中，等价于 scanf("%d", &i);
	std::cin >> i;
	std::cout << i << std::endl;

	double d;
	std::cin >> d;
	std::cout << d << std::endl;

	// cin,cout等对象必须放到一行的最左边
	// "hello" >> cout;

	return 0;
}

int main1()
{
	// cout 类似于C的printf, 但是呢，cout是一个也就是说是一个变量，不是函数
	// 用来向标准输出打印数据
	// << 左移操作符 在这里功能被重新修改了 ====>  可以当成数据流向
	// 数据从右边流到左边，右边是 字符串，左边是标准输出，所以字符串在标准输出上进行显示
	// endl 代表换行 等价于 '\n' C语言中的转译字符在C++可以正常使用
	// cout 支持链式输出
	cout << "Hello world!" << endl;
	// cout << "Hello \tworld!\n";

	int a = 10;
	double d = 1.2;
	// 简单类型数据 cout 可以直接进行输出，不用像printf 一样需要 %d %s。。
	cout << a << ", " << d << endl;

	return 0;
}