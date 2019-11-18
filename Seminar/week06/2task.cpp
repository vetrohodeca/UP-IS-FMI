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
	int number;
	cin>>number;
	int counter=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==number)
		{
			counter++;
			cout<<i<< endl;
		}
	}
	if(counter==0)
		{
			cout<<"The number is not found"<<endl;
		}
		else 
		{
			cout<<"Nunber is found "<<counter<<" times";
		}
		
	return 0;
}
