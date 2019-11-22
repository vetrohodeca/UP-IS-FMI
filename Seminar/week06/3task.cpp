#include<iostream>
#include<cmath>
using namespace std;
int main()
{
		int n;
	cin>>n;
	int arr[1000];
	int smallerValues[1000];
	int otherValues[1000];
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
	int closestToAverage=arr[0];
	int currentDifference;
	int minDifference=2147483647;
	for(int i=0;i<n;i++)
	{
		currentDifference=abs(arr[i]-average);	
		if(currentDifference<minDifference)
		{
			minDifference=currentDifference;
			closestToAverage=arr[i];
		}	
	}
	int index1=0;
	int index2=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<average)
		{
			smallerValues[index1]=arr[i];
			index1++;
		}
		else
		{
			otherValues[index2]=arr[i];
			index2++;
		}
	}
	cout<<"Smaler values: ";
	for(int i=0;i<index1;i++)
	{
		cout<<smallerValues[i]<<" ";
	}
	cout <<endl<<"Other values: ";
	for(int i=0;i<index2;i++)
	{
		cout<<otherValues[i]<<" ";
	}
	cout<<endl<<"Closest to the average: "<<closestToAverage<<endl;
	return 0;
}
