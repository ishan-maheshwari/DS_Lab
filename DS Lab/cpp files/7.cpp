#include<iostream>
#include<cctype>
#include<stack>
using namespace std;
int solve(int op1,char op, int op2) 
{
	switch (op) {
	case '*': return op2 * op1;
	case '/': return op2 / op1;
	case '+': return op2 + op1;
	case '-': return op2 - op1;
	default : return 0;
	}
}
int evalPostfix(char postfix[], int size) 
{
	stack<int> s;
	int i = 0;
	char ch;
	int val;
	while (i < size) 
	{
		ch = postfix[i];
		
		if (isdigit(ch)) 
		s.push(ch-'0');
		else 
		{
			int op1 = s.top();
			s.pop();
			int op2 = s.top();
			s.pop();
			val = solve(op1, ch, op2);
			s.push(val);
		}
		i++;
	}
	return val;
}
int main() 
{
	char postfix[] = {'3','4','5','+','*','1','/'};
	cout<<"The postfix expression is\n";
	int size = sizeof(postfix);
	for(int i=0;i<size;i++)
	cout<<postfix[i]<<" ";
	cout<<endl;
	int val = evalPostfix(postfix, size);
	cout<<"\nExpression evaluates to "<<val;
	cout<<endl;
	return 0;
}