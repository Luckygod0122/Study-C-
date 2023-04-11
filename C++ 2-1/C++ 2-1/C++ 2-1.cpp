/*
문제 1 
다음은 무슨 의미를 갖는가?
const int num = 10;             변경할수 없는 상수 정수, num은 초기값 10을 가지고 있다.
const int* ptr1 = &val1;        const가 int* ptr1 을 상수화 시켰기 때문에 *ptr1이 가리키는 값은 변경 불가능하다.
int * const ptr2 = & val2;      const가 ptr2를 상수화 시켰기 때문에 ptr2의 값은 변경 불가능이지만 *ptr2의 값은 변경할 수 있다.
const int * const ptr3 = &val3; const가 int * const ptr3를 상수화 시켰기 때문에 포인터 변수의 값과 가리키는 변수의 값을 모두 변경할 수 없다.
문제 2
데이터, 스택, 힙 영역에는 어떠한 형태의 변수가 할당되는가? malloc과 free 함수에 관해서도 설명해보자
1.데이터 영역은 프로그램의 시작부터 끝까지 유지되는 정적(static) 변수와 전역(global) 변수를 저장하는 영역이다.
2.스택 영역은 함수 호출과 관련된 지역(local) 변수와 함수 호출 시 사용되는 호출 스택(call stack)을 저장하는 영역이다.
3.힙 영역은 동적(dynamic)으로 할당되는 변수들을 저장하는 영역이다.
4.malloc 함수호출에 의해 할당된 메모리 공간은 free 함수 호출을 통해서 소멸하지 않으면 해제되지 않는다.
문제 3
Call by Value 와 Call by Reference 의 차이를 설명해라
1. 함수 내부에서 인자의 값이 변경되어도 원본 값은 변경되지 않는다. 함수 내부에서 매개변수의 값이 변경되더라도 함수 호출자에게는 영향을 미치지 않는다.
2. 수가 호출될 때 인자로 전달되는 값의 메모리 주소(reference)가 함수 내부로 전달되는 방식이다. 함수 내부에서 매개변수의 값을 변경하면, 원본 값도 함께 변경된다. 
*/

#include<iostream>
using namespace std;

bool IsPositive(int num)
{
	if (num <= 0)
	{
		return false;
	}
	else 
	{
		return true;
	}
}
int main(void)
{
	bool isPos;
	int num;
	cout << "input number: ";
	cin >> num;

	isPos = IsPositive(num);
	if (isPos)
	{
		cout << "Positive number" << endl;
	}
	else
	{
		cout << "Negative number" << endl;
	}
	return 0;
}