// iostream ��C++����̨�������������һЩ���������صĶ���
#include <iostream>

// ʹ�ñ�׼�������ռ� std
using namespace std;

// cin
int main()
{
	int i;
	// cin ��׼����
	// >> ���ݴ���������ұߣ�����Ǳ�׼���룬Ҳ���Ǽ������ݣ��ұ��Ǳ���
	// ���ݴӱ�׼���� ���� ���� i �У��ȼ��� scanf("%d", &i);
	std::cin >> i;
	std::cout << i << std::endl;

	double d;
	std::cin >> d;
	std::cout << d << std::endl;

	// cin,cout�ȶ������ŵ�һ�е������
	// "hello" >> cout;

	return 0;
}

int main1()
{
	// cout ������C��printf, �����أ�cout��һ��Ҳ����˵��һ�����������Ǻ���
	// �������׼�����ӡ����
	// << ���Ʋ����� �����﹦�ܱ������޸��� ====>  ���Ե�����������
	// ���ݴ��ұ�������ߣ��ұ��� �ַ���������Ǳ�׼����������ַ����ڱ�׼����Ͻ�����ʾ
	// endl ������ �ȼ��� '\n' C�����е�ת���ַ���C++��������ʹ��
	// cout ֧����ʽ���
	cout << "Hello world!" << endl;
	// cout << "Hello \tworld!\n";

	int a = 10;
	double d = 1.2;
	// ���������� cout ����ֱ�ӽ��������������printf һ����Ҫ %d %s����
	cout << a << ", " << d << endl;

	return 0;
}