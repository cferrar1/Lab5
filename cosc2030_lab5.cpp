// cosc2030_lab5.cpp 
// Cameron Ferrarini

#include "stdafx.h"
#include "Lab7MyStack.h"
#include <iostream>
#include <string>



int main()
{
	string mystring = "IDK Here's a pretty random string";
	string rev1, rev2, rev3, rev4;

	rev1 = stringReversal1(mystring);
	rev2 = stringReversal2(mystring);
	rev3 = stringReversal3(mystring);
	rev4 = stringReversal4(mystring);

	cout << "My string was: " << mystring << endl;
	cout << "Reversal 1: " << rev1 << endl;
	cout << "Reversal 2: " << rev2 << endl;
	cout << "Reversal 3: " << rev3 << endl;
	cout << "Reversal 4: " << rev4 << endl;
	
	return 0;
}


string stringReversal1(string input)
{

	stack<char> in;
	for (unsigned int i = 0; i < input.length(); i++)
	{
		in.push(input.at(i));
	}
	string output;
	while (!in.empty())
	{
		output.push_back(in.top());
		in.pop();
	}

	return output;
}

string stringReversal2(string input)
{
	vector<char> in;
	for (unsigned int i = 0; i < input.length(); i++)
	{
		in.push_back(input.at(i));
	}
	string output;
	while (!in.empty())
	{
		output.push_back(in.back());
		in.pop_back();
	}
	return output;
}

string stringReversal3(string input)
{
	list<char> in;
	for (unsigned int i = 0; i < input.length(); i++)
	{
		in.push_back(input.at(i));
	}
	string output;
	while (!in.empty())
	{
		output.push_back(in.back());
		in.pop_back();
	}
	return output;
}

string stringReversal4(string input)
{
	MyStack ms;
	for (unsigned int i = 0; i < input.length(); i++)
	{
		ms.push(input.at(i));
	}
	string output;
	while (!ms.isEmpty())
	{
		output.push_back(ms.pull());
	}
	return output;
}
