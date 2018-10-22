#include "stdafx.h"
#include "Lab7MyStack.h"

bool MyStack::isEmpty() const
{
	if (data.empty())
	{
		return true;
	}
	return false;
}

void MyStack::push(char & c)
{
	data.push_back(c);
}

char & MyStack::pull()
{
	char& c = data.back();
	data.pop_back();
	return c;
}
