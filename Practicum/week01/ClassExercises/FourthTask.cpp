#include<iostream>
using namespace std;
int main()
{
	int number;
	cin>>number;
	if(number%10==number/1000%10&&number/10%10==number/100%10)
	{
		cout<<"true"<<endl;
	}
	cout<<"false"<<endl;
	system("pause");
	return 0;
}
