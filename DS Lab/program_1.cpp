#include <iostream>

using namespace std;

int main()
{	
	int row_first,col_first,row_second,col_second;
	cout<<"Enter dimensions of first matrix - "<<endl;
	cout<<"Rows: ";
	cin>>row_first;

	cout<<"Columns: ";
	cin>>col_first;

	cout<<"Enter dimensions of second matrix - "<<endl;
	cout<<"Rows: ";
	cin>>row_second;
	cout<<"Columns: ";
	cin>>col_second;

	if(col_first!=row_second)
		cout<<"Multiplication not possible!"<<endl;
	else{
		int arr[row_first][col_first],brr[row_second][col_second],crr[row_first][col_second];

		cout<<"Enter the first matrix - "<<endl;

		for(int i=0;i<row_first;i++)
		for(int j=0;j<col_first;j++)
			cin>>arr[i][j];

		cout<<"Enter the second matrix -"<<endl;

		for(int i=0;i<row_second;i++)
			for(int j=0;j<col_second;j++)
				cin>>brr[i][j];

		for(int i=0;i<row_first;i++)
			for(int j=0;j<col_second;j++)
				crr[i][j]=0;


		for(int i=0;i<row_first;i++)
		{
			for(int j=0;j<col_second;j++)
			{
				for(int k=0;k<col_first;k++)
				{
					crr[i][j]=crr[i][j] + arr[i][k]*brr[k][j];
				}
			}
		}

		cout<<"The product matrix is - "<<endl;

		for(int i=0;i<row_first;i++)
		{
			for(int j=0;j<col_second;j++)
				cout<<crr[i][j]<<" ";

			cout<<endl;
		}
	}


}