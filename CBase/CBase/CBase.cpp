// CBase.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CBase
{
public:
	virtual void test() = 0;//纯虚函数
	virtual void display()//没有virtual 派生类就不能运行
	{
		cout << "基类" << endl;
	}
};
class CBased:public CBase//继承
{
public:
	void test()//函数体
	{

	}
	void display()
	{
		CBase::display();
		cout << "派生类" << endl;
	}
};
int main()
{
	CBase *p;
	CBased ojbk2;
	p = &ojbk2;
	p->display();
	p->CBase::display();//基类
    return 0;
}
//包含纯虚函数的类为抽象类，抽象类不能创建对象只能被继承。继承时还得在派生类里写函数体
