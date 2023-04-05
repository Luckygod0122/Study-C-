//파일의 분할
// 헤더파일 의미와 정의 방법
// 헤더파일의 의미: 외부 소스파일에 정의된 변수나 함수를 사용하기위해 만들어진 파일
// 정의 방법 #include<헤더파일>, 사용자가 정의한 헤더파일은 #include "헤더파일"로 정의한다.
#include<iostream>
#include"헤더.h"

using namespace std;

void BestComImp1::SimpleFunc(void)
{
	cout << "BestCom이 정의한 함수" << endl;

}

void ProgComImp1::SimpleFunc(void)
{
	cout << "ProgCom이 정의한 함수" << endl;
}


