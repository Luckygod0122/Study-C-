#include <iostream>
using namespace std;
// C++ 1-2 함수의 오버로딩: 함수의 이름은 같지만 매개변수의 종류나 개수가 다름
// 반환형은 함수 호출시 함수를 구분하는 기준이 될 수 없다.
void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void swap(char* a, char* b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void swap(double* a, double* b)
{
	double temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}
int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}
int BoxVolume(int length, int width)
{
	return length * width * 1;
}
int BoxVolume(int length)
{
	return length * 1 * 1;
}
int BoxVolume()
{
	return 1;
}
int main(void)
{

	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	cout << num1 << ' ' << num2 << endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	cout << ch1 << ' ' << ch2 << endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	cout << dbl1 << ' ' << dbl2 << endl;
	cout << Adder() << endl;

	cout << Adder(5) << endl;
	cout << Adder(3, 5) << endl;

	cout << "[3,3,3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[5,5,D] : " << BoxVolume(5, 5) << endl;
	cout << "[7,D,D] : " << BoxVolume(7) << endl;
	cout << "[D,D,D] : " << BoxVolume() << endl;

	return 0;
}


