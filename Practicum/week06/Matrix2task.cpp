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
	cout<<"Main: ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i][i]<<"  ";
	}
	cout<<endl<<"Second:  ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i][n-i-1]<<"  ";
	}
	return 0;
}
