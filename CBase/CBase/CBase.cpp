// CBase.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CBase
{
public:
	virtual void test() = 0;//���麯��
	virtual void display()//û��virtual ������Ͳ�������
	{
		cout << "����" << endl;
	}
};
class CBased:public CBase//�̳�
{
public:
	void test()//������
	{

	}
	void display()
	{
		CBase::display();
		cout << "������" << endl;
	}
};
int main()
{
	CBase *p;
	CBased ojbk2;
	p = &ojbk2;
	p->display();
	p->CBase::display();//����
    return 0;
}
//�������麯������Ϊ�����࣬�����಻�ܴ�������ֻ�ܱ��̳С��̳�ʱ��������������д������
