// ջ-C���԰�.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
	//ջ�Ļ�������
	Stack S;
	initStack(&S);
	stackEmpty(&S);
	//����ѹջ����
	for(int i = 1; i <= 20; i++)
		push(&S, i);
	ELEMTYPE e;
	//���Եõ�ջ��Ԫ��
	getTop(&S, &e);
	printf("ջ��������Ϊ%d\n", e);
	//���Եõ�ջ�ĳ���
	int n;
	stackLength(S, &n);
	printf("��ջ�ĳ���Ϊ:%d\n", n);
	//���Ե�ջ����
	for (int i = 1; i <= 20; i++)
	{
		pop(&S, &e);
		printf("��%d�ε�ջ��ֵΪ%d\n", i, e);
	}


	system("pause");
    return 0;
}

