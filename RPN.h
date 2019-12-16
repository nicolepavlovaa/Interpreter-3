#ifndef __RPN_H
#define __RPN_H
#include <iostream>
#include <algorithm> 
#include <stack>
#include <string>
#include <list>
#include <stdexcept>
using namespace std;

class RPN
{
	stack<int> results;
	stack<char> ops;

	bool isDigit(char c) { return '0' <= c && c <= '9'; }
	int digitValue(char c) { return c - '0'; }
	unsigned long int apply(unsigned long int larg, unsigned long int rarg, char op);
	void popAndApply(char op);
	int priority(char op);

public:
	string stringToRPN(string input);
	unsigned long int calculate(string RPNstring);
};
#endif