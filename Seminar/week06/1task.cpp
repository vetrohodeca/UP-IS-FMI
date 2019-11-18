#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int min=arr[0];
	int max=arr[0];
	for	(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];	
		}
	}
	cout<<"max: "<< max<<"   min: "<<min;
	int secondMin=arr[0];
	int secondMax=arr[0];
		for	(int i=0;i<n;i++)
	{
		if(arr[i]>secondMax&&arr[i]!=max)
		{
			secondMax=arr[i];
		}
		if(arr[i]<secondMin&&arr[i]!=min)
		{
			secondMin=arr[i];	
		}
	}
	cout<<"    Second min: "<<secondMin<<"   Second max: "<<secondMax;
	return 0;
}
