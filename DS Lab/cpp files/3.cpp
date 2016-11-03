#include<iostream>

using namespace std;

void selection_sort(int arr[],int n)
{	

	for(int i=0;i<n-1;i++)
	{	
		int min=arr[i],pos=i;;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<min){

				min=arr[j];
				pos=j;
			}
		}

		arr[pos]=arr[i];
		arr[i]=min;

	}
}

void insertion_sort(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		int temp=arr[i];
		int j=i-1;

		while(temp<arr[j] && j>=0)
		{	
			arr[j+1]=arr[j];
			j--;
		}

		arr[j+1]=temp;


	}
}

int main()
{	
	int n;
	cout<<"Enter number of elements: ";
	cin>>n;

	int arr[n];
	cout<<"Enter elements to sort: ";
	for(int i=0;i<n;i++)
		cin>>arr[i];

	 cout<<"Enter 1 for Selection sort, 2 for Insertion Sort: ";
	 int choice;
	 cin>>choice;

	 if(choice==1)
	 	selection_sort(arr,n);
	 else if(choice==2)
	 		insertion_sort(arr,n);
	 		else cout<<"Invalid Choice!"<<endl;

	 cout<<"Sorted array is: ";
	 for(int i=0;i<n;i++)
	 	cout<<arr[i]<<" ";

	 cout<<endl;

}