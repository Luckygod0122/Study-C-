#include <iostream>

using namespace std;

void SwapByRef2(int& ref1, int& ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}
int main()
{
	int val1 = 10;
	int val2 = 20;

	SwapByRef2(val1, val2); // 함수에 전달되는 인자로 참조자 초기화 call by reference
	cout << "vla1: " << val1 << endl;
	cout << "vla2: " << val2 << endl;
	return 0;
}

