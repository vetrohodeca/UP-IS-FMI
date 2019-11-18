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
	int sum=0;
	double average;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	average=(double)sum/n;
	int closestToAvaerage=arr[0];
	int difference=0;
	for(int i=0;i<n;i++)
	{
		difference=arr[i]-closestToAverage;
		
		closestToAverage==arr[i];
	}
	return 0;
}
