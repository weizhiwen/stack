// 栈-C语言版.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
	//栈的基本操作
	Stack S;
	initStack(&S);
	stackEmpty(&S);
	//测试压栈函数
	for(int i = 1; i <= 20; i++)
		push(&S, i);
	ELEMTYPE e;
	//测试得到栈顶元素
	getTop(&S, &e);
	printf("栈顶的数据为%d\n", e);
	//测试得到栈的长度
	int n;
	stackLength(S, &n);
	printf("该栈的长度为:%d\n", n);
	//测试弹栈函数
	for (int i = 1; i <= 20; i++)
	{
		pop(&S, &e);
		printf("第%d次弹栈的值为%d\n", i, e);
	}


	system("pause");
    return 0;
}

