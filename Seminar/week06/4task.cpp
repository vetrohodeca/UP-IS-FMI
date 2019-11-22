#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[1000];
	bool isMirror=true;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n/2;i++)
	{
		if(arr[i]!=arr[n-1-i])
		{
			isMirror=false;
		}
	}
	cout<<boolalpha<<isMirror<<endl;
	return 0;
}
