#pragma once
#include <iostream>
using namespace std;

template <typename T>
class MyStack
{
private:
	T *m_pBuffer;//ջ�ռ�ָ��
	int m_iSize;//ջ����
	int m_iTop;//ջ����ջ��Ԫ�ظ���
public:
	MyStack(int size);//�����ڴ�ռ䣬�趨ջ��������ջ��
	~MyStack();//����ջ���ڴ�ռ�
	bool stackEmpty();//�ж�ջ�Ƿ�Ϊ��
	bool stackFull();//�ж�ջ�Ƿ�Ϊ��
	void clearStack();//���ջ
	int stackLength();//����ջ�ĸ���
	bool push(T elem);//Ԫ����ջ��ջ������
	bool pop(T &elem);//Ԫ�س�ջ��ջ���½�
	void stackTraverse(bool isFromButtom);//����ջ������Ԫ��
};

template <typename T>
MyStack<T>::MyStack(int size)
{
	m_iSize = size;
	m_pBuffer = new T[size];
	m_iTop = 0;
}

template <typename T>
bool MyStack<T>::stackEmpty()
{
	if (0 == m_iTop)
		return true;
	else
		return false;
}

template <typename T>
bool MyStack<T>::stackFull()
{
	if (m_iTop >= m_iSize)
		return true;
	else
		return false;
}

template <typename T>
void MyStack<T>::clearStack()
{
	m_iTop = 0;
}

template <typename T>
bool MyStack<T>::push(T elem)
{
	if (stackFull())
		return false;
	else
	{
		m_pBuffer[m_iTop] = elem;//Ĭ�ϵĿ�������
		m_iTop++;
		return true;
	}
}

template <typename T>
bool MyStack<T>::pop(T &elem)
{
	if (stackEmpty())
		return false;
	else
	{
		m_iTop--;
		elem = m_pBuffer[m_iTop];
		return true;
	}
}

template <typename T>
int MyStack<T>::stackLength()
{
	return m_iTop;
}

template <typename T>
void MyStack<T>::stackTraverse(bool isFromButtom)
{
	if (isFromButtom)
	{
		//��ջ����ʼ
		for (int i = 0; i < m_iTop; i++)
		{
			cout << m_pBuffer[i] << " ";
			//m_pBuffer[i].printCoordinate();
		}
	}
	else
	{
		for (int i = m_iTop - 1; i >= 0; i--)
		{
			cout << m_pBuffer[i] << " ";
			//m_pBuffer[i].printCoordinate();
		}
	}
	cout << endl;
}

template <typename T>
MyStack<T>::~MyStack()
{
	delete[]m_pBuffer;
}

