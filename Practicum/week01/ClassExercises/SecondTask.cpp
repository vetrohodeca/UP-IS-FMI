#include<iostream>
using namespace std;
int main()
{
	int number;
	cin>>number;
	if(number%2==0&&number%3==0&&number%5!=0)
	{
		cout<<"True";
	}
	else cout<<"False";
	system("pause");
	return 0;
}
