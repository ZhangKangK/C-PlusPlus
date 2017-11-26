#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 30;

	// C语言中表达式返回的是一个值
	// C++返回的是变量本身
	// C++的三目运算符可以作为左值来使用
	(a > b ? a : b) = 90; // ==> *(a > b ? &a : &b) = 90;

	// 如果想让三目运算符当左值使用，表达式中不能有常量
	// (a > b ? 10 : b) = 90; // ==> *(a > b ? &10 : &b) = 90;

	cout << b << endl;

	return 0;
}