#include<iostream>
using namespace std;
int main()
{
	int ppl;
	cin>>ppl;
	double price;
	cin>>price;
	if(ppl<5)
	{
		cout<<ppl*price;
	}
	else if(ppl>=5&&ppl<=10)
	{
		cout<<ppl*price*0.95;
	}
	else if(ppl>=11&&ppl<=20)
	{
		cout<<ppl*price*0.9;
	}
	else cout<<ppl*price*0.85;
	return 0;
}
