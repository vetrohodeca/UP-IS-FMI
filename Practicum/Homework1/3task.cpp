#include<iostream>
using namespace std;
int main()
{
	unsigned long long  number;
	cin>>number;
	unsigned long long safedNumber=number;
	int counter=0;
	int sum=0;
	bool isValid=false;
	bool isValidOne=false;
	bool isValidTwo=false;
	while(number!=0)
	{
		number/=10;
		counter++;
	}
	if(counter%2==0)
	{ 
		isValidOne=true;
	}
	int k=0;
	while(safedNumber!=0)
	{	
		int currentDigit=safedNumber%10;
	//	cout<<currentDigit<<"->";
		if(k%2==0)
		{
			sum+=currentDigit*currentDigit;	
		//	cout<<sum<<"  ";
		}	
		else
		{
			sum+=currentDigit;
		//	cout<<sum<<"  ";
		}
		k++;
		safedNumber/=10;
	}
		
//	cout<<sum<<endl;
	int sumOfSum=0;
	while(sum!=0)
	{
		int digitsOfSum=sum%10;
		sumOfSum+=digitsOfSum;
		sum/=10;
	}
	if(sumOfSum%3==0)
	{
		isValidTwo=true;
	}
//	cout<<isValidOne<<"  "<<isValidTwo;
	isValid=isValidOne&&isValidTwo;
	if(isValid)
	{
		cout<<"Valid credit card!";
	}
	else cout<<"Fake credit card!";
	
	return 0;
}
