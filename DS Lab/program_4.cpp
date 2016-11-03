#include<iostream>

using namespace std;

void push(int arr[],int n,int &top,int data)
{
	if(top==n-1)
		cout<<"Overflow";
	else arr[++top]=data;
}

void pop(int arr[],int &top)
{
	if(top==-1)
		cout<<"Underflow";
	else {
		cout<<"Element popped: "<<arr[top];
		top--;
	}
}

bool isEmpty(int top)
{
	if(top==-1)
		return 1;
	else return 0;
}

bool isFull(int n,int top)
{
	if(top==n-1)
		return 1;
	else return 0;
}

void clear(int &top)
{
	top=-1;
	cout<<"Stack is cleared."<<endl;
}

void display(int arr[],int top)
{	cout<<"Elements of stack is: ";
	for(int i=top;i>=0;i--)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main()
{	
	int n;
	cout<<"Enter maximum size of stack: ";
	cin>>n;

	int arr[n],top=-1;

	char ch='y';
	int result;

	while(ch=='y')
	{
		int choice;

		cout<<"1 - Push\n2 - Pop\n3 - Display\n4 - IsEmpty\n5 - IsFull\n6 - Clear Stack"<<endl;
		cin>>choice;

		switch(choice)
		{
			case 1: cout<<"Enter element to push onto stack: ";
					int data;
					cin>>data;

					push(arr,n,top,data);
					break;

			case 2: pop(arr,top);
					break;

			case 3: display(arr,top);
					break;

			case 4: result = isEmpty(top);
					if(result==1)
						cout<<"Stack is empty."<<endl;
					else cout<<"Stack is not empty."<<endl;
					break;

			case 5: result = isFull(n,top);
					if(result==1)
						cout<<"Stack is full."<<endl;
					else cout<<"Stack is not full."<<endl;
					break;

			case 6: clear(top);
					break;

		}

		cout<<"Do you want to continue? (y/n) : ";
		cin>>ch;
	}

}