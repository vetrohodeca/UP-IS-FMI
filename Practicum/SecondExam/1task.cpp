#include <iostream>
using namespace std;
int multiply(int multiplyer1, int multiplyer2)
{
	if (multiplyer2 == 0)
	{
		return 0;
	}
	else
	{
		return multiplyer1 +multiply(multiplyer1, multiplyer2- 1);
	}
}
int main()
{
	int multiplyer1, multiplyer2;
	cin >> multiplyer1 >> multiplyer2;
	cout<<multiply(multiplyer1, multiplyer2);
}



