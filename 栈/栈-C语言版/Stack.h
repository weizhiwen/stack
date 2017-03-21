#pragma once
#include <iostream>
#define STACK_INIT_SIZE 10
#define STACK_INCREMENT 5
#define ELEMTYPE int
using namespace std;

//定义栈结构体
typedef struct Stack {
	ELEMTYPE *base;
	ELEMTYPE *top;
	int stackSize;
}Stack;

//初始化栈
int initStack(Stack *S)
{
	S->base = (ELEMTYPE *)malloc(STACK_INIT_SIZE * sizeof(ELEMTYPE));
	if (!(S->base))
	{
		printf("栈初始化失败！\a");
		return 0;
	}
	S->top = S->base;
	S->stackSize = STACK_INIT_SIZE;
	return 1;
}

//压栈，压入数据e
int push(Stack *S, ELEMTYPE e)
{
	if (S->top - S->base >= S->stackSize)
	{
		S->base = (ELEMTYPE *)realloc(S->base, (S->stackSize + STACK_INCREMENT) * sizeof(ELEMTYPE));
		if (!(S->base))
		{
			printf("栈扩充失败！\a");
			return 0;
		}
		S->top = S->base + S->stackSize;
		S->stackSize += STACK_INCREMENT;
	}
	*(S->top++) = e; //*(S->top) = e; S->top++;
	return 1;
}

//弹栈，弹出的数据赋值给传入的e
int pop(Stack *S, ELEMTYPE *e)
{
	if (S->base == S->top)
	{
		printf("栈为空，无数据可以弹出！\a");
		return 0;
	}
	*e = *(--S->top); //*e = *(S->top - 1); S->top--;
	return 1;
}

//判断栈为空
void stackEmpty(Stack *S)
{
	if (S->base == S->top)
		printf("栈为空\n");
	else
		printf("栈不为空\n");
}

//得到栈的长度
void stackLength(Stack S, int *n)
{
	int length;
	if (S.top == S.base)
		length = 0;
	else {
		for (length = 0; S.top != S.base; length++)
			S.top--;
	}
	*n = length;
}

//得到栈顶数据
int getTop(Stack *S, ELEMTYPE *e)
{
	if (S->top == S->base)
	{
		printf("栈为空，无数据可以弹出！\a");
		return 0;
	}
	*e = *(S->top - 1);
	return 1;
}


