#include<iostream>
using namespace std;
int main()
{
	int n;
	do
	{
		cin>>n;
	}
	while(n<=1);
	double sum=0;
	for(int i=1;i<=n;i++)
	{
		if(i!=n)
		{
			cout<<1<<"/"<<i*(i+1)<<" + ";
		}		
		else 
		{
			cout<<1<<"/"<<i*(i+1); 
		}
		sum+=(double)1/(i*(i+1));
	}
	cout<<endl;
	cout<<sum;
	return 0;
}
