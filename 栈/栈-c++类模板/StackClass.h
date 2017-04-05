#pragma once
#include <iostream>
using namespace std;

template <typename T>
class MyStack
{
private:
	T *m_pBuffer;//栈空间指针
	int m_iSize;//栈容量
	int m_iTop;//栈顶，栈中元素个数
public:
	MyStack(int size);//分配内存空间，设定栈的容量，栈顶
	~MyStack();//回收栈的内存空间
	bool stackEmpty();//判断栈是否为空
	bool stackFull();//判断栈是否为满
	void clearStack();//清空栈
	int stackLength();//已有栈的个数
	bool push(T elem);//元素入栈，栈顶上升
	bool pop(T &elem);//元素出栈，栈顶下降
	void stackTraverse(bool isFromButtom);//遍历栈中所有元素
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
		m_pBuffer[m_iTop] = elem;//默认的拷贝函数
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
		//从栈顶开始
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

