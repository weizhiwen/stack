// ջ-c++��ģ��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include "StackClass.h"
using namespace std;



int main()
{
	//ջ�Ļ�������
	MyStack<int> *pStack = new MyStack<int>(20);
	if (pStack->stackEmpty())
	{
		printf("ջΪ�գ�\n");
	}
	else
	{
		printf("ջ��Ϊ�գ�\n");
	}

	//����ѹջ����
	for (int i = 1; i <= 10; i++)
		pStack->push(i);

	//���Եõ�ջ�ĳ���
	printf("ջ�ĳ���Ϊ��%d\n", pStack->stackLength());

	//���Ա���ջ����
	pStack->stackTraverse(true);
	pStack->stackTraverse(false);
	


	system("pause");
	return 0;
}

