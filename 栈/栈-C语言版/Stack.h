#pragma once
#include <iostream>
#define STACK_INIT_SIZE 10
#define STACK_INCREMENT 5
#define ELEMTYPE int
using namespace std;

//����ջ�ṹ��
typedef struct Stack {
	ELEMTYPE *base;
	ELEMTYPE *top;
	int stackSize;
}Stack;

//��ʼ��ջ
int initStack(Stack *S)
{
	S->base = (ELEMTYPE *)malloc(STACK_INIT_SIZE * sizeof(ELEMTYPE));
	if (!(S->base))
	{
		printf("ջ��ʼ��ʧ�ܣ�\a");
		return 0;
	}
	S->top = S->base;
	S->stackSize = STACK_INIT_SIZE;
	return 1;
}

//ѹջ��ѹ������e
int push(Stack *S, ELEMTYPE e)
{
	if (S->top - S->base >= S->stackSize)
	{
		S->base = (ELEMTYPE *)realloc(S->base, (S->stackSize + STACK_INCREMENT) * sizeof(ELEMTYPE));
		if (!(S->base))
		{
			printf("ջ����ʧ�ܣ�\a");
			return 0;
		}
		S->top = S->base + S->stackSize;
		S->stackSize += STACK_INCREMENT;
	}
	*(S->top++) = e; //*(S->top) = e; S->top++;
	return 1;
}

//��ջ�����������ݸ�ֵ�������e
int pop(Stack *S, ELEMTYPE *e)
{
	if (S->base == S->top)
	{
		printf("ջΪ�գ������ݿ��Ե�����\a");
		return 0;
	}
	*e = *(--S->top); //*e = *(S->top - 1); S->top--;
	return 1;
}

//�ж�ջΪ��
void stackEmpty(Stack *S)
{
	if (S->base == S->top)
		printf("ջΪ��\n");
	else
		printf("ջ��Ϊ��\n");
}

//�õ�ջ�ĳ���
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

//�õ�ջ������
int getTop(Stack *S, ELEMTYPE *e)
{
	if (S->top == S->base)
	{
		printf("ջΪ�գ������ݿ��Ե�����\a");
		return 0;
	}
	*e = *(S->top - 1);
	return 1;
}


