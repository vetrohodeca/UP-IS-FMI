#include<iostream>
using namespace std;
long long factorial(int number)
{
	if(number==1)
	{
		return 1;
	}
	return factorial(number-1)*number;
}
long long fibonaci(int n)
{
	if (n==1||n==2)
	{
		return 1;
	}
	 return fibonaci(n-1)+fibonaci(n-2);
}
int numbersOfInteger(int n)
{
	if(n/10==0)
	{
		return 1;
	}
	return numbersOfInteger(n/10)+1;
}
int numberOfMatches(int n, int digit)
{
	int counter=0;
	if(n==0)
	{
		counter=0;
	}
	else if(n%10==digit)
		{
			 counter++;
			 counter+=numberOfMatches(n/10, digit);
		}
	else 
	{
		counter+=numberOfMatches(n/10, digit);
	}
	return counter;
}
int globalN;
void piramida(int n) {
	if (n == 0) return;
	piramida(n - 1);
	for (int i = 0; i < n; i++)
	{
		cout << globalN - i;
	}
	cout << endl;
}
bool stringCompare(char* str1, char* str2)
{
	if(str1[0]=='\0'&&str2[0]!='\0'||str1[0]!='\0'&&str2[0]=='\0')
	{
		return false;
	}
	if(str1[0]=='\0'&&str2[0]=='\0')
	{
		return true;
	}
	if(str1[0]!=str2[0])
	{
		return false;
	}
	stringCompare(str1+1, str2+1);
}
int main()
{
	char str1[100] ="abcc";
	char str2[100] ="abcd";
	cout<<stringCompare(str1, str2);
	return 0;
}
