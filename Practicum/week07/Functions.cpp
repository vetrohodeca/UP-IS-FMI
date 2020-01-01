#include<iostream>
using namespace std;
long pow(int number,int power)
{
	long result=1;
	for(int i=0;i<power;i++)
	{
		result*=number;
	}
	return result;
}
int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else return b;
}
int maxOfThree(int a, int b, int c)
{
	if(max(a,b)<=c)
	{
		return c;
	}
	if(max(a,c)<=b)
	{
		return b;
	}
	else return a;
}
bool isLetter(char c)
{
	if(c>='a'&&c<='z'||c>='A'&&c<='Z')
	{
		return true;
	}
	return false;
}
bool isDigit(char c)
{
	if(c>='0'&&c<='9')
	{
		return true;
	}
	return false;
}
int digitSum(int number)
{
	int result=0;
	while(number!=0)
	{
		result+=number%10;
		number/=10;
	}
	return result;
}
int isPrime(int number)
{
	bool isPrime= true;
	for(int i=2;i<number/2;i++)
	{
		if(number%i==0)
		{
			isPrime=false;
		}
	}
	return isPrime;
}
bool isTwin(int a, int b)
{
	if(isPrime(a)&&isPrime(b)&&a+2==b)
	{
		return true;
	}
	return false;
}
int numberOfDigits(int number)
{
	int counter=0;
	while(number!=0)
	{
		counter++;
		number/=10;
	}
	return counter;
}
void reverseDigits(int &number)
{
	int result=0;;
	while(number!=0)
	{
		int reminder=number%10;
		result=result*10+reminder;
		number/=10;
	}
	number=result;
}
void reverseNumbersInArray(int arr[10])
{
	for(int i=0;i<10;i++)
	{
		reverseDigits(arr[i]);
	}
}
void printMultiplicationTable()
{
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=9;j++)
		{
			if(i*j>9)
			cout<<i<<"*"<<j<<"="<<i*j<<" ";
			else 
			cout<<i<<"*"<<j<<"="<<i*j<<"  ";
		}
		cout<<endl;
	}
}
void printSpecificMatrix(int size)
{
	int arr[100][100];
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(j==i)
			{
				arr[i][j]=i;
			}
			else if(i<j)
			{
				arr[i][j]=j-i;
			}
			else
			{
				arr[i][j]=j*i;
			}
		}
	}
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<size;j++)
			{
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	
}
int main()
{
	printSpecificMatrix(4);
	return 0;
}
