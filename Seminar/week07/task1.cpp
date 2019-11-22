#include<iostream>
using namespace std;
int abs(int abs)
{
	if(abs<0)
	{
		abs=-abs;
	}
	return abs;
}
double pow(double number, int power)
{
	double result=1;
	for(int i=0;i<power;i++)
	{
		result*=number;
	}
	return result;
}
double min( double number1,double number2)
{
	if(number1-number2>0.0000001)
	{
		return number2;
	}
	return number1;
}
double max( double number1,double number2)
{
	if(number1-number2<0.0000001)
	{
		return number2;
	}
	return number1;
}
double maxOf3(double number1, double number2, double number3)
{
	if(number1-number2>0.0000001&&number1-number3>0.0000001)
		return number1;
	if(number2-number1>0.0000001&&number2-number3>0.0000001)
		return number2;
	if(number3-number1>0.0000001&&number3-number2>0.0000001)
		return number3;
}
double minOf3(double number1, double number2, double number3)
{
	if(number1-number2<0.0000001&&number1-number3<0.0000001)
		return number1;
	if(number2-number1<0.0000001&&number2-number3<0.0000001)
		return number2;
	if(number3-number1<0.0000001&&number3-number2<0.0000001)
		return number3;
}
bool isAlpha(char c)
{
	if(c>=65&&c<=90||c>=97&&c<=122)
	{
		return true;
	}
	return false;
}
bool isDigit(char c)
{
	if(c+48>=48&&c+48<=57)
	{
		return true;
	}
	return false;
}
int main()
{
	cout<<abs(-6)<<endl;
	cout<<pow(5.5,3)<<endl;
	cout<<min(3.8,3.81)<<endl;
	cout<<max(3.8,3.81)<<endl;
	cout<<maxOf3(1,2,3)<<endl;
	cout<<maxOf3(3,2,1)<<endl;
	cout<<maxOf3(2,3,1)<<endl;
	cout<<minOf3(1,2,3)<<endl;
	cout<<minOf3(3,2,1)<<endl;
	cout<<minOf3(2,3,1)<<endl;
	cout<<isAlpha('Z')<<endl;
	cout<<isDigit(5)<<endl;
	return 0;
}
