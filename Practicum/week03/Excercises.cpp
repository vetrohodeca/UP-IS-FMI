#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	//task 1
/*	int number;
	cin>>number;
	int counter=0;
	if(number==0)
	{
		cout<<1;
		return 0;
	}
	while(number!=0)
	{
		number/=10;
		counter++;
	}
	cout<<counter;
	*/
	//2task
	/*
	int number;
	cin>>number;
	bool isPrime=false;
	for(int i=2;i<number/2;i++)
	{
		if(number%i==0)
		{
			isPrime=true;
		}
	}
	cout<<boolalpha<<isPrime<<endl;
	*/
	//3task
	/*
	int number;
	cin>>number;
	int factorial=1;
	for(int i=1;i<=number;i++)
	{
		factorial*=i;;
	}
	cout<<factorial<<endl;
	*/
	//4 task
	/*int number;
	do
	{
		cin>>number;
	}
	while(number>200||number<10);
	for(int i=number;i>7;i--)
	{
		if(i%7==0)
		{
			cout<<i<<endl;
		}
	}*/
	//5 task
/*	int counter=0;
	int sum=0;
	int average=0;
	int number=0;

	while(number>=0)
	{
	
		cin>>number;
			if(number<0)
		{
			break;
		}
		counter++;
		sum+=number;
		
	}
		average=sum/counter;	
	cout<<counter<<"  "<<sum<<"  "<<average;
	*/
	//6 task
	/*for(int i=100;i<1000;i++)
	{
		if(i%10!=i/10%10&&i/100&10!=i%10&&i/10%10!=i/100%10)
		{
			cout<<i<<endl;
		}
	}
	*/
	// 7 task
	/*cout<<0<<endl;
	cout<<1<<endl;
	int lastDigit=1;
	int beforeLastDigit=0;
	for(int i=0;i<20;i++)
	{
		int temp=lastDigit;
		cout<<lastDigit+beforeLastDigit<<endl;
		lastDigit=lastDigit+beforeLastDigit;
		beforeLastDigit=temp;
		
	}*/
	/*int number;
	cin>>number;
	int sum=0;
	bool isPerfect;
	for(int i=1;i<=number/2;i++)
	{
		if(number%i==0)
		{
			sum+=i;
		}
	}
	
	sum==number?isPerfect=true:isPerfect=false;
	cout<<boolalpha<<isPerfect;
	*/
	//9task
	int number;
	cin>>number;
	int counter=0;
	int sum=0;
	int secondCopyOfNumber=number;
	int copyOfNumber=number;
	while(number!=0)
	{
		counter++;
		number/=10;
	}
	for(int i=0;i<counter;i++)
	{
		sum+=pow(copyOfNumber%10,counter);
		copyOfNumber/=10;
	}
	if(sum==secondCopyOfNumber)
	{
		cout<<boolalpha<<true;
	}
	else cout<<boolalpha<<false;
	return 0;
}
