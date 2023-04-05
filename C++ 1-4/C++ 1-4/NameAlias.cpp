#include<iostream>
using namespace std;

int val = 100; // 전역변수 

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

//범위 지정 연산자
//전역변수와 지역변수의 이름이 같을 경우 전역변수는 지역변수에 의해 가려진다. 
//따라서 범위지정 연산자를 사용하여 전역변수 val 에 접근한다.
int SimpleFunc(void)
{
	int val = 20; // 지역변수
	val += 3; // 23
	::val += 7; //전역변수 107
}