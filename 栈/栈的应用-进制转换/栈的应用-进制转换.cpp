// 栈的应用-进制转换.cpp : 定义控制台应用程序的入口点。
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
	//创建一个所要用到的字符数组
	char num[] = "0123456789ABCDEF";
	MyStack<int> *pStack = new MyStack<int>(30);
	int N = 2016;
	int mod = 0;
	//短除法取余数入栈
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

