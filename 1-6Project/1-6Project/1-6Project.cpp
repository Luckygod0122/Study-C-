//내가 작성한 코드
//문제점: 여려개의 계좌를 처리 못하고 하나밖에 안됨, 전역변수 사용
//해결방안: 계좌정보를 나타내는 구조체를 만들고 여러계좌를 사용할 배열을 만들어야함

#include <iostream>
using namespace std;
void accountDeposit(int a);
void accountwithdrawal(int b);

int balance;

int main()
{
	int accountNum = 0;
	char name[100];
	int depositAmount;
	int withdrawAmout;
	int menuNum;

	while (1)
	{
		cout << "메뉴번호를 입력하시오:";
		cin >> menuNum;
		cout << endl;

		switch (menuNum)
		{
		case 1:
			cout << "계좌 ID를 입력하시오: ";
			cin >> accountNum;
			cout << endl;
			cout << "이름을 입력하시오: ";
			cin >> name;
			cout << endl;
			cout << "입금액을 입력하시오: ";
			cin >> balance;
			cout << endl;
			break;

		case 2:
			cout << "계좌 ID: " << accountNum << endl;
			cout << "입금액: ";
			cin >> depositAmount;
			cout << endl;
			accountDeposit(depositAmount);
			cout << "입금완료" << endl;
			break;

		case 3:
			cout << "계좌 ID: " << accountNum << endl;
			cout << "출금액: ";
			cin >> withdrawAmout;
			cout << endl;
			accountwithdrawal(withdrawAmout);
			break;

		case 4:
			cout << "계좌 ID: " << accountNum << endl;
			cout << "이름: " << name << endl;
			cout << "잔액: " << balance << endl;
			break;

		case 5:
			cout << "프로그램을 종료합니다" << endl;
			return 0;
			break;
		}
	}
}

void accountDeposit(int a)
{
	balance += a;
}
void accountwithdrawal(int b)
{
	balance -= b;
}