#include <iostream>
#include <string>
using namespace std;
int stack[150];
int top=-1;
void push(char ch)
{
	if(top==149)
	{
		cout<<"Overflow\n";return;
	}
		stack[++top]=ch;
}
void pop()
{
	if(top==-1)
	{
		cout<<"Underflow\n";return;
	}
	top--;
}
int main()
{
	bool flag=true;	string s;
	cout<<"Input Expression-\n";
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='{'||s[i]=='['||s[i]=='(')
			push(s[i]);
		else if(s[i]=='}')
			if(stack[top]!='{')
			{
				flag=false;break;
			}
			else
			{
				pop();
			}
		else if(s[i]==']')
			if(stack[top]!='[')
			{
				flag=false;break;
			}
			else
			{
				pop();
			}
		else if(s[i]==')')
			if(stack[top]!='(')
			{
				flag=false;break;
			}
			else
			{
				pop();
			}
	}
	if(flag && top==-1)
		cout<<"Valid Expression.";
	else
		cout<<"Invalid Expression.";
	return 0;
}