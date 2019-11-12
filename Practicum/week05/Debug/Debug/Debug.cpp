#include<iostream>
#include<cmath>
#define MAXSIZE 9999
#define INTMAXSIZE 2147483647
using namespace std;
int main()
{

	// bonus task 2
	int n;
	cin >> n;
	bool flag = true;
	int arr[MAXSIZE];
	int count = 1;
	int used[MAXSIZE];
	for (int i = 0; i < n; i++)
	{
		used[i] = 0;
	}
	for (int i = 0;  i< n;i ++)
	{
		cin >> arr[i];
	}
	cout << " -> ";
	for (int i = 0; i < n; i++)
	{
		if (used[i] == 0)
		{
			int count = 0;		
			for (int j = i; j < n; j++)
			{
				if (arr[j] == arr[i])
				{
					count += 1;
					used[j] = 1;
				}
			}
			cout << arr[i]<< "-" <<count<<"  ";
		}
	}

	return 0;
}