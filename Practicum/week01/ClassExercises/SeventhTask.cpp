#include<iostream>
using namespace std;
void replaceTwoNumbers(int& a, int& b)
{
	int temp= a;
	a=b;
	b=temp;
}
void replaceTwoNumbersWithoutExtraNumber(int& a, int& b)
{
	a=a+b;
	b=a-b;
	a=a-b;	
}
int main()
{
	int a,b;
	cin>>a>>b;
	replaceTwoNumbersWithoutExtraNumber(a,b);
	cout<<a<<"  "<<b<<endl;
	system("pause");
	return 0;
}
