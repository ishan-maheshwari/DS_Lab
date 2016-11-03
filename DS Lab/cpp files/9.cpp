#include <iostream>
using namespace std;
int queue[100];
int front=-1;
int rear=-1;
void enqueue(int data)
{
	if(front==(rear+1)|| front==0&&rear==99)
	{
		cout<<"Overflow\n";return;
	}
	else if(front==-1 && rear==-1)
		front=rear=0;
	else
		rear=(rear+1)%100;
	queue[rear]=data;
}
void dequeue()
{
	if(front==-1)
	{
		cout<<"Underflow\n";return;
	}
	else if(front==rear)
		front=rear=-1;
	else
		front=(front+1)%100;
}
void display()
{
	int i=front;
	while(true)
	{
		cout<<queue[i]<<" ";
		if(i==rear)
			break;
		else
			i=(i+1)%100;
	}cout<<endl;
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
}