#include <iostream>
using namespace std;

struct Student 
{
	int id;
	char name[20];
};

int main()
{
	// C++�еĽṹ����һ���µ��������ͣ�����ֱ�������������������Ҫ�ټ� struct �ؼ���
	Student stu = {10, "wang"};

	cout << "id = " << stu.id << ", name = " << stu.name << endl;



	return 0;
}