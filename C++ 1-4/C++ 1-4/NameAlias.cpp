#include<iostream>
using namespace std;

int val = 100; // �������� 

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;;
		}
	}
}

void NameAlias(void)
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC;
	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;
}

//���� ���� ������
//���������� ���������� �̸��� ���� ��� ���������� ���������� ���� ��������. 
//���� �������� �����ڸ� ����Ͽ� �������� val �� �����Ѵ�.
int SimpleFunc(void)
{
	int val = 20; // ��������
	val += 3; // 23
	::val += 7; //�������� 107
}