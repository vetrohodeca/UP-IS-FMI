#include<iostream>
using namespace std;
int main()
{
	long long number;
	cin>>number;
	int sum=0;
	long long safeNumber=number;
	while(safeNumber!=0)
	{
		sum+=safeNumber%10;
		safeNumber/=10;
	}
	int reminder= sum%7;
	if(reminder!=0)
	{
		number=number*10+(7-reminder);
		cout<<number;
	}
	else cout<<number<<0;
	
	return 0;
}
