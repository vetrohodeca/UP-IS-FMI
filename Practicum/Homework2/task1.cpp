#include<iostream>
using namespace std; 
const int MAXSIZE=100;
int main()
{
	int m;
	cin>>m;
	int arr[100][100];
	int row[10]={1,2,3,4,5,6,7,8,9};
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<9;j++)
		{
			arr[i][j]=row[j];
		}
		int temp= row[0];
		for(int i=0;i<8;i++)
		{
			row[i]=row[i+1];
		}
		row[8]=temp;
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<9;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
