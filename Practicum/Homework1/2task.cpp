#include<iostream>
using namespace std;
int main()
{
	int n;
	do{
	cin>>n;
	}
	while(n<1||n>100);
	for(int i=0;i<n;i++)
	{
		cout<<"|";
		if(i%2==0)
		{
			for(int i=0;i<n/2;i++)
			{
				cout<<"# ";
			}
		}
		else 
		{
			for(int i=0;i<n/2;i++)
			{
				cout<<" #";
			}
		}
		cout<<"|";
		cout<<endl;
	}
	return 0;
}
