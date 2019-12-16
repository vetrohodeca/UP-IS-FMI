#include<iostream>
using namespace std;
int numberOf5(int a,int b)
{
	int counter= 0;
	for(int i=a;i<b;i++)
		{
			int number=i;
			int lastDigit=number%10;
			number/=10;
			int secondDigit=number%10;
			number/=10;
			int firstDigit=number%10;
			if(firstDigit==5)
			{
				counter++;
			}
			if(secondDigit==5)
			{
				counter++;
			}
			if(lastDigit==5)
			{
				counter++;
			}
		}
		return counter;
}
int main()
{
	int a,b;
	do
	{
		cin>>a>>b;
	}
	while(a<10||a>1000||b<10||b>1000);
	int counter;
	if(a!=10&&a!=1000||b!=10&&b!=1000)
	{
		counter=numberOf5(a,b);
	}
	else //ako sa 10 i100
	{
		counter=numberOf5(a,b);	
	}
	cout<<counter;
	return 0;
}
