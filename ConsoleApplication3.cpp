// ConsoleApplication3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;

class CMyTest
{
	int x;
	int y;
public:
	CMyTest();
	CMyTest(int a, int b);
	CMyTest(CMyTest&om);
	void disPlay();
	~CMyTest();
};
CMyTest::CMyTest()
{
	x = 0;
	y = 0;
	cout << "Ĭ�Ϲ��캯��   x=" << x << "y=" << y <<endl;
}
CMyTest::CMyTest(int a, int b)
{
	x = a;
	y = b;
	cout << "���캯��   x=" << x << "y=" << y << endl;
}
CMyTest::CMyTest(CMyTest&om)
{
	x = om.x * 3;
	y = om.y * 2;
	cout << "���ƹ��캯��   x=" << x << "y=" << y << endl;
}
void CMyTest::disPlay()
{
	cout << "dispaly   x=" << x << "y" << y << endl;
}
CMyTest::~CMyTest()
{
	cout << "��������   x=" << x << "y" << y << endl;
}
CMyTest myTest()
{
	CMyTest om(30, 50);
	om.disPlay();
	return om;
}
int main()
{
	CMyTest ios;
	ios.disPlay();
	ios = myTest();
	ios.disPlay();
	return 0;
}