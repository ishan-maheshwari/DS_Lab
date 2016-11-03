#include <iostream>
using namespace std;
int queue[100];
int rear=-1;
int front=-1;
void enqueue(int data)
{
	if(rear==99)
	{
		cout<<"Overflow\n";
		return;
	}
	else if(front==-1)
	{
		front=0;rear=0;
		queue[rear]=data;
	}
	else
		queue[rear++]=data;
}
void dequeue()
{
	if(front==-1)
	{
		cout<<"Underflow\n";
		return;
	}
	else if(rear==0 && front==0)
	{
		cout<<"Popped- "<<queue[front]<<endl;
		rear=front=-1;
	}
	else
	{
		cout<<"Popped- "<<queue[front]<<endl;
		front++;
	}
}
void display()
{cout<<endl;
	for(int i=front;i<=rear;i++)
		cout<<queue[i]<<" ";cout<<endl;
}
int main()
{
	int ch;
	while(true)
	{
		cout<<"Menu\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n-->";
		cin>>ch;
		if(ch==1)
		{
			int data;cout<<"--> ";cin>>data;
			enqueue(data);
		}
		else if(ch==2)
		{
			dequeue();
		}
		else if(ch==3)
		{
			display();
		}
		else
			break;
	}
	return 0;	
}