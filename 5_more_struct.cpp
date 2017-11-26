#include <iostream>
using namespace std;

struct Student 
{
	int id;
	char name[20];
};

int main()
{
	// C++中的结构体是一种新的数据类型，可以直接拿来定义变量，不需要再加 struct 关键字
	Student stu = {10, "wang"};

	cout << "id = " << stu.id << ", name = " << stu.name << endl;



	return 0;
}