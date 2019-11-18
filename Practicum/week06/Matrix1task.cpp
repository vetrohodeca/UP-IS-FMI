#include<iostream>
#include <iomanip>
#include<math.h>
#define MAXSIZE 100
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	int counter =0;
	int arr[MAXSIZE][MAXSIZE];
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
			sum+=arr[i][j];
			counter++;
		}
	}
	//cout << fixed << setprecision(2) << total;
	double average=(double)sum/counter;
	average=average*10;
	average=floor(average);
	average/=10;
	cout<<"Sum: "<<sum<<endl<<"Average: "<<fixed<<setprecision(1)<<average;	
	return 0;
}
