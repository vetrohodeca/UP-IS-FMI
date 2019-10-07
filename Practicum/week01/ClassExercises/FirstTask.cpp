#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int reminder =b % a;
	if (reminder == 0)
	{
		cout << "true"<<endl;
	}
	else cout << "false"<<endl;
	system("pause");
	return 0;
}