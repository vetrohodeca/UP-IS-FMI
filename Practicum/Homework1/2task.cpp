#include<iostream>
using namespace std;
int main()
{
	int number;
	do
	{
		cin>>number;
	}
	while(number<1||number>100); 
	for(int i=0;i<number;i++)
	{
		cout<<"|";
		if(i%2==0)
		{
			for(int i=0;i<number/2;i++)
			{
				cout<<"# ";
			}
		}
		else 
		{
			for(int i=0;i<number/2;i++)
			{
				cout<<" #";
			}
		}
		cout<<"|";
		cout<<endl;
	}
	return 0;
}
