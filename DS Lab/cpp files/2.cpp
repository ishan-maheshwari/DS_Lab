#include <iostream>
using namespace std;
int array[100];

void bubble_sort(int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	cout<<"Sorted Array- \n";
	for(i=0;i<n;i++)
		cout<<array[i]<<" ";
	cout<<endl;
}

void binary_search(int l,int r,int e)
{
	int m=(l+r)/2;
	if(l<=r)
	{
		if(array[m]==e)
			{cout<<"Element found at- "<<(m+1)<<"th position.\n";return;}
		else if(array[m]<e)
		{
			binary_search(m+1,r,e);
		}
		else
		{
			binary_search(l,m-1,e);
		}
	}
	else
	cout<<"Element Not Found\n";return;
}

int main()
{
	int n,i;
	cout<<"Input Size-\t";cin>>n;
	cout<<"Input Elements-\n";
	for(i=0;i<n;i++)
		cin>>array[i];
	bubble_sort(n);
	cout<<"Input element to search for-\n";
	cin>>i;
	binary_search(0,n-1,i);
	return 0;
}