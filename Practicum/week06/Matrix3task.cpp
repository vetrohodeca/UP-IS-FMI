#include<iostream>
#define MAXSIZE 100
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[MAXSIZE][MAXSIZE];
	int upSum=0;
	int downSum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i<j)
			{
				upSum+=arr[i][j];
			}
		}
	}
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i>j)
			{
				downSum+=arr[i][j];
			}
		}
	}
	cout<<"Sum under diagonal: "<<downSum<<endl;
	cout<<"Sum over diagonal: "<<upSum<<endl;
	return 0;
}
