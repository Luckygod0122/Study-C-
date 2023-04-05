#include <iostream>
#include<cstring> //구조체를 사용하기 위해 c언어 헤더파일을 사용함

using namespace std;
const int NAME_LEN = 20; //변수값을 변경하지 못하도록 지정하는 예약어 const

void ShowMenu(void);            // 메뉴출력
void MakeAccount(void);         // 계좌개설을 위한 함수
void DepositMoney(void);        // 입 금
void WithdrawMoney(void);       // 출 금
void ShowAllAccInfo(void);      // 잔액조회

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT }; // 열거형 상수를 정의하여 변수처럼 사용할 수 있도록 함

typedef struct // 구조체는 여러개의 변수를 하나의 이름으로 묶어서 사용할 수 있게 해주는 데이터 타입
{
	int accID;                  // 계좌번호 
	int balance;                // 잔액
	char cusName[NAME_LEN];     // 고객이름
} Account;

Account accArr[100];            // Account 저장을 위한 배열
int accNum = 0;                 // 저장된 Account 수

int main()
{
	int choice;                 
	while (1)
	{
		ShowMenu();
		cout << "선택: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE:
			MakeAccount();
			break;
		case DEPOSIT:
			DepositMoney();
			break;
		case WITHDRAW:
			WithdrawMoney();
			break;
		case INQUIRE:
			ShowAllAccInfo();
			break;
		case EXIT:
			return 0;
			break;
		default:
			cout << "Illegal selection.." << endl;

		}
	}
	return 0;
}

void ShowMenu(void)
{
	cout << "------Menu------" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램종료" << endl;
}

void MakeAccount(void)
{
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "이 름: "; cin >> name;
	cout << "입금액: "; cin >> balance;
	cout << endl;

	accArr[accNum].accID = id;
	accArr[accNum].balance = balance;
	strcpy_s(accArr[accNum].cusName, name); // 문자열 복사 함수 name으로 부터 accARR[accNum].cusName로 문자열 복사
	accNum++;
}

void DepositMoney(void)
{
	int money;
	int id;
	cout << "[입    금]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "입금액: "; cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accID == id)
		{
			accArr[i].balance += money;
			cout << "입금완료" << endl << endl;
			return;  //이함수를 호출한 장소로 되돌아감
		}
	}
	cout << "유효하지 않은 id 입니다." << endl << endl;  // if문이 실행되지 않았기 때문에 이문구가 실행됨
}

void WithdrawMoney(void)
{
	int money;
	int id;
	cout << "[출  금]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "출금액: "; cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accID == id)
		{
			if (accArr[i].balance < money) // 잔액보다 출금할려는 금액이 더 크면 잔액부족 출력
			{
				cout << "잔액부족" << endl << endl;
				return;
			}
			accArr[i].balance -= money;
			cout << "출금완료" << endl << endl;
			return;
		}
	}

	cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void ShowAllAccInfo(void)
{
	for (int i = 0; i < accNum; i++)
	{
		cout << "계좌 ID: " << accArr[i].accID << endl;
		cout << "이 름: " << accArr[i].cusName << endl;
		cout << "잔 액: " << accArr[i].balance << endl << endl;
	}
}