#include <iostream>
using namespace std;
struct node
{
	int data;
	node* next;
}*top;
void insert(int x)
{
	node* ptr=new node;
	if(ptr==NULL)
	{
		cout<<"Overflow\n";return;
	}
	else
	{
		ptr->data=x;
		ptr->next=top;
		top= ptr;
	}
}
void del()
{
	if(top==NULL)
	{
		cout<<"Underflow\n";return;
	}
	else
	{
		cout<<top->data<<" popped!\n";
		top=top->next;
	}
}
void display()
{
	node *ptr=top;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" -> ";
		ptr=ptr->next;
	}	cout<<"END"<<endl;
}
void search(int element)
{
	int i=1;
	node *ptr=top;
	while(ptr!=NULL)
	{
		if(ptr->data==element)
		{
			cout<<element<<" found at- "<<i<<endl;return;
		}
		else
		{
			ptr=ptr->next;i++;
		}
	}
	cout<<"Element not found\n";return;
}
int main()
{
	while(true)
	{int ch;
		cout<<"Menu\n1.Insert\n2.Delete\n3.Display\n4.Search\n5.Exit\n-->";
		cin>>ch;
		if(ch==1)
		{
			int data;cout<<"--> ";cin>>data;
			insert(data);
		}
		else if(ch==2)
		{
			del();
		}
		else if(ch==3)
		{
			display();
		}
		else if(ch==4)
		{
			int element;
			cout<<"-->";cin>>element;
			search(element);
		}
		else
			break;
	}
	return 0;
}