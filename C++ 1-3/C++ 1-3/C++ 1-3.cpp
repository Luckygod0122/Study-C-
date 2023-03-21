#include<iostream>

using namespace std;
template <typename T> // template << 자료형에 의존하지 않음	
inline T SQUARE(T x) //함수의 몸체부분이 함수의 호출문장을 완전히 대체함
{
	return x * x;

}
namespace BestComImp1 //namespace 라는 이름공간
{
	void SimpleFunc(void);
	
}
namespace BestComImp1
{
	void PrettyFunc(void);
	
}
namespace ProgComImp1
{
	void SimpleFunc(void);
}
int main()
{
	BestComImp1::SimpleFunc();
	cout << SQUARE(5) << endl;
	cout << SQUARE(12) << endl;
	return 0;
}

void BestComImp1::SimpleFunc(void)
{
	cout << "BestCom이 정의한 함수" << endl;
	PrettyFunc(); // 동일 이름공간
	ProgComImp1::SimpleFunc(); //다른 이름공간
}
void BestComImp1::PrettyFunc(void)
{
	cout << "So Pretty!!" << endl;
}
void ProgComImp1::SimpleFunc(void)
{
	cout << "ProgCom이 정의한 함수" << endl;
}