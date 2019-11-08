#include<iostream>
#include<cmath>
using namespace std;
long long factorial(int n)
{
	long long result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
long long pow(int n, int p)
{
	long long result = n;
	for (int i = 1; i < p; i++)
	{
		result *= n;
	}
	return result;
}
int main()
{
	double sum = 0;
	int n;
	cin >> n;
	const int MAXSIZE=2*n;
	int multipliers[MAXSIZE];
	int x;
	cin >> x;
	for (int i = 1; i <= n; i++)
	{
		int k=0;
		if (i % 2 == 1)
		{
			if(i!=1)
			{
				cout<<" + ";
			}
			sum += (double)pow(x, (2 * i - 1)) / factorial(2 * i-1);
			for(int j=2 * i-1;j>=2;j--	)
			{
				multipliers[k]=j;
				k++;
			}
		
			cout<<(double)pow(x, (2 * i - 1))<<"/";
				if(i==1)
			{
				cout<<1;continue;
			}
			cout<<"(";
			for(int j=0;j<k;j++)
			{
				cout<<multipliers[j];
				if(j!=k-1)
				cout<<"*";
			}
			cout<<")";
		}
		if (i % 2 == 0)
		{
			cout<<" - ";
			sum -= (double)pow(x, (2 * i - 1)) / factorial( 2 * i-1);
					for(int j=2 * i-1;j>=2;j--)
			{
				multipliers[k]=j;
				k++;
			}
			cout<<(double)pow(x, (2 * i - 1))<<"/(";
			for(int j=k-1;j>=0;j--)
			{
				cout<<multipliers[j];
				if(j!=0)
				cout<<"*";
			}
			cout<<")";
		}
	}
	
	cout <<"  "<<sum;
	return 0;
}
