#include<iostream>

using namespace std;

int main()
{
	cout<<"Enter number of elements to sort: ";
	int n;
	cin>>n;

	int arr[n];

	cout<<"Enter the elements: ";
	for(int i=0;i<n;i++)
		cin>>arr[i];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

	cout<<"Sorted array is: ";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";

	cout<<endl;

	cout<<"Enter element to search: ";
	int element;
	cin>>element;

	int beg=0,end=n-1,mid,flag=0,pos;

	while(beg<=end)
	{
		mid=(beg+end)/2;

		if(arr[mid]==element)
		{
			flag=1;
			pos=mid;
			break;
		}

		if(arr[mid]>element)
			end=mid-1;
		else beg=mid+1;
	}

	if(flag==0)
		cout<<"Element not found"<<endl;
	else cout<<"Element found at position "<<pos+1<<endl;

}