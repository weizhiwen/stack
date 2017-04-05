// 栈-c++类模板.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "StackClass.h"
using namespace std;



int main()
{
	//栈的基本操作
	MyStack<int> *pStack = new MyStack<int>(20);
	if (pStack->stackEmpty())
	{
		printf("栈为空！\n");
	}
	else
	{
		printf("栈不为空！\n");
	}

	//测试压栈函数
	for (int i = 1; i <= 10; i++)
		pStack->push(i);

	//测试得到栈的长度
	printf("栈的长度为：%d\n", pStack->stackLength());

	//测试遍历栈函数
	pStack->stackTraverse(true);
	pStack->stackTraverse(false);
	


	system("pause");
	return 0;
}

