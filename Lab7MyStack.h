// Author: Cameron Ferrarini
// This is lab 5, but the instructions say lab 7 so I'll roll with it 


#pragma once
#include "stdafx.h"
#include <string>
#include <iostream>
#include <stack>
#include <vector>
#include <list>
using namespace std;

class MyStack
{
public:

	vector<char> data;

	bool isEmpty() const;
	void push(char& c);
	char& pull();
};

string stringReversal1(string input);
string stringReversal2(string input);
string stringReversal3(string input);
string stringReversal4(string input);