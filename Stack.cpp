#include "stdafx.h"
#include "Stack2.h"
#include <iostream>

using namespace std;

// This is an example of an exported variable
STACK2_API int nStack = 0;

// This is an example of an exported function.
STACK2_API int fnStack(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see Stack.h for the class definition
CStack::CStack()
{
	n = new Node;
	n->data = NULL;
	n->pre = nullptr;
	t = n;
	currentnode = 0;
}

CStack::CStack(int z)
{
	size = z;
}

bool CStack::push(int x)
{
	if (currentnode == 0)
	{
		peekval = x;
	}


	if (currentnode<size)
	{
		n = new Node;
		n->data = x;
		n->pre = t;
		t = n;
		currentnode++;
		return true;
	}



}

bool CStack::pop()
{
	if (n->pre == nullptr)
	{
		return false;
	}

	else
	{
		cout << n->data << endl;
		n = n->pre;
		delete t;
		t = n;
		return true;
	}
}

bool CStack::peek()
{
	if (n->pre == nullptr)
	{
		return false;
	}

	else
	{
		cout << peekval << endl;
		return true;
	}

}

bool CStack::isFull()
{
	if (currentnode == size)
	{
		return true;
	}

	else
		return false;
}

bool CStack::isEmpty()
{
	if (currentnode == 0)
	{
		return true;
	}

	else
		return false;
}
