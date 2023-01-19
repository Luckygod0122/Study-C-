#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int num;
	int result = 0;
	for (int i = 1; i < 6; i++)
	{
		cout << i << "번째 정수를 입력: ";
		cin >> num;
		result += num;
	}
	cout << "합계: "<< result << endl;

	string name;
	string phoneNum;

	cout << "이름을 입력하시오: ";
	cin >> name;
	cout << "전화번호를 입력하시오: " << endl;
	cin >> phoneNum;

	cout << "이름은: " << name << endl;
	cout << "전화번호는: " << phoneNum << endl;

	int multiNum;
	cout << "구구단은 몇단인가요?: ";
	cin >> multiNum;
	for (int j = 1; j < multiNum; j++)
	{
		for (int k = 1; k < 10; k++)
		{
			cout << j << "X" << k << "=" << j * k << " ";
		}
		cout << endl;
	}

	while (1)
	{
		int sellMoney;
		int pay;
		cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		cin >> sellMoney;
		if (sellMoney == -1)
		{
			cout << "프로그램을 종료합니다.";
			return 0;
		}		
		pay = 50 + sellMoney * 0.12;
		cout << "이번 달 급여: " << pay << endl;
		
	}
	return 0;

}

