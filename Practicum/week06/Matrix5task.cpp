#include<iostream>
#define MAXSIZE 100
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[MAXSIZE][MAXSIZE];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	int tempArr[MAXSIZE][MAXSIZE];
	int swap;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			tempArr[i][j]=arr[j][i];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n/2;j++)
		{
			swap= tempArr[i][n-j-1];
			tempArr[i][n-j-1]=tempArr[i][j];
			tempArr[i][j]=swap;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<tempArr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
