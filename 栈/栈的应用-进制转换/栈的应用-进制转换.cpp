// ջ��Ӧ��-����ת��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include "StackClass.h"
using namespace std;

#define BINARY 2
#define OCTONARY 8
#define HEXADECIMAL 16


int main()
{
	//����һ����Ҫ�õ����ַ�����
	char num[] = "0123456789ABCDEF";
	MyStack<int> *pStack = new MyStack<int>(30);
	int N = 2016;
	int mod = 0;
	//�̳���ȡ������ջ
	while (N != 0)
	{
		mod = N % HEXADECIMAL;
		pStack->push(mod);
		N = N / HEXADECIMAL;
	}
	int elem = 0;
	while (!pStack->stackEmpty())
	{
		pStack->pop(elem);
		cout << num[elem];
	}
	printf("\n");
	delete pStack;
	pStack = NULL;
	system("pause");
	return 0;
}

