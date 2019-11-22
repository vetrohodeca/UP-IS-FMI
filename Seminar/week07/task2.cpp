#include<iostream>
using namespace std; 
bool isPrime(int a)
{
	bool isPrime=true;
	for(int i=2;i<=2;i++)
	{
		if(a%i==0)
		{
			isPrime=false;
		}
	}
	return isPrime;
}
bool isSpecialPrime(int a, int b)
{
	return a==b-2&&isPrime(a)&&isPrime(b);
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<isSpecialPrime(a,b);
	return 0;
}
