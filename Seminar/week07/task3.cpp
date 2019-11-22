#include<iostream>
using namespace std;
int min( int a, int b)
{
	if(a<b)
	{
		return a;
	}
	return b;
}
void printMatrix(int n, int m)
{
	int arr[100][100];
	for(int i=0;i<min(n,m);i++)
	{
		arr[i][i]=i;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i<j)
			{
				arr[i][j]=j-i;
			}	
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i>j)
			{
				arr[i][j]=j*i;
			}	
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int a,b;
	cin>>a>>b;
	printMatrix(a,b);
	return 0;
}
