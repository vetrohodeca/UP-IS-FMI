#include<iostream>
using namespace std;
const int MAXSIZE=210;
int main()
{
	int n,m;
	int arr1[MAXSIZE];
	int arr2[MAXSIZE];
	int arr3[MAXSIZE];
	do
	{
		cout<<"n: ";
		cin>>n;
		cout<<"enter first array: ";
		for(int i=0;i<n;i++)
		{
			cin>>arr1[i];
		}
		cout<<"m: ";
		cin>>m;
		cout<<"enter second array: ";
		for(int i=0;i<m;i++)
		{
			cin>>arr2[i];
		}
	}
	while(n<5||n>105||m<5||m>105); 
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(arr1[i]%2==0)
		{
			arr3[j]=arr1[i];
			j++;
		}
	}
	for(int i=0;i<m;i++)
	{
		if(arr2[i]%2==0)
		{
			arr3[j]=arr2[i];
			j++;
		}
	}
		for(int i=0;i<n;i++)
	{
		if(arr1[i]%2!=0)
		{
			arr3[j]=arr1[i];
			j++;
		}
		
	}
	for(int i=0;i<m;i++)
	{
		if(arr2[i]%2!=0)
		{
			arr3[j]=arr2[i];
			j++;
		}		
	}
	for(int i=0;i<j;i++)
	{
		cout<<arr3[i]<<" ";
	}
	return 0;
}
