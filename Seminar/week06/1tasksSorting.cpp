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
	for(int i=0;i<n-1;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"    Min: "<<arr[0]<<"   Max: "<<arr[n-1];
	cout<<"    Second min: "<<arr[1]<<"   Second max: "<<arr[n-2];
	return 0;
}
