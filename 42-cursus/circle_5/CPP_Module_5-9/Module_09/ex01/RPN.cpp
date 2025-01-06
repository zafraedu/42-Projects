#include "./RPN.hpp"

/***************************************Orthodox Canonical Form***************************************/
RPN::RPN() {}
RPN::~RPN() {}
RPN &RPN::operator=(const RPN &src)
{
	if (this != &src)
	{
		this->operand = src.operand;
		this->result = src.result;
		this->Stack = src.Stack;
	}
	return *this;
}
RPN::RPN(const RPN &src)
{
	this->operand = src.operand;
	this->result = src.result;
	this->Stack = src.Stack;
}

/**************************************Utility functions part***************************************/
bool RPN::operatorIsValid(char Operator)
{
	if (Operator == '/' || Operator == '+' || Operator == '-' || Operator == '*')
		return (true);
	else
		return (false);
}
void RPN::checkRpn(std::string &rpn, int index)
{
	if (!isdigit(rpn[index]) && operatorIsValid(rpn[index]) == false && rpn[index] != ' ')
		throw ": invalid char";
	if (index == 0 && !isdigit(rpn[index]))
		throw "";
	else if (isdigit(rpn[index]) && rpn[index + 1] != ' ')
		throw "";
	else if (this->operatorIsValid(rpn[index]) && rpn[index + 1] != ' ' && rpn[index + 1] != 0)
		throw "";
	else if (this->operatorIsValid(rpn[index]) && Stack.size() < 2)
		throw "";
}

RPN::RPN(std::string rpn) : result(0)
{
	for (int index = 0; rpn[index]; index++)
	{
		checkRpn(rpn, index);
		if (isdigit(rpn[index]))
			Stack.push(rpn[index] - 48);
		else if (Stack.size() >= 2 && operatorIsValid(rpn[index]) == true)
		{
			operand.secend = Stack.top();
			Stack.pop();
			operand.first = Stack.top();
			Stack.pop();
			if (rpn[index] == '/' && operand.secend == 0)
				throw " : division by zero";
			result = (rpn[index] == '+') ? (operand.first + operand.secend) : (rpn[index] == '-') ? (operand.first - operand.secend)
																																		 : (rpn[index] == '*')	 ? (operand.first * operand.secend)
																																														 : (operand.first / operand.secend);
			Stack.push(result);
		}
	}
	if (Stack.size() == 1)
		std::cout << Stack.top() << std::endl;
	else
		throw "";
}
