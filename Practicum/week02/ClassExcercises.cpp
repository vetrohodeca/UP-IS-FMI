#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//1 задача
	
/*	int a,b,c;
	cin>>a>>b>>c;
	if(a>b&&a>c)
	{
		cout<<a<<endl;
	}
	else if(b>c&&b>a)
	{
		cout<<b<<endl;
	}
	else
	{
		cout<<c<<endl;
	}
	
	
	//2 task:
	
		int a,b,c;
	cin>>a>>b>>c;
	int largest,otherOne, otherTwo;
	if(a>b&&a>c)
	{
		largest=a;
		otherOne=b;
		otherTwo=c;
	}
	if(b>c&&b>a)
	{
		largest=b;
		otherOne=a;
		otherTwo=c;
	}
	if(c>a&&c>b)
	{
		largest=c;
		otherOne=a;
		otherTwo=b;
	}
	if(a+b>c&&c+b>a&&a+c>b)
	{
		if(largest*largest==otherOne*otherOne+otherTwo*otherTwo)
		{
			cout<<"Right- angled triangle.";
		}
		else if(largest*largest>otherOne*otherOne+otherTwo*otherTwo)
		{
			cout<<"Obtuse triangle."<<endl;
		}
		else cout<<"Acute-angled triangle."<<endl;
	}
	else cout<<"Invalid triangle."<<endl;
	*/
	
	//3 task
	/*
	int year;
	bool isLeap=false;
	cin>>year;
	if(year%4==0&&year%100==0&&year%400!=0)
	{
		isLeap=true;		
	}
	cout<<boolalpha<<isLeap;
	
	
	//4 task
	double dogYears;
	cin>>dogYears;
	double humnYears;
    if(dogYears>=2)
    {
    	humnYears=(dogYears-2)*4+21;
	}
	else 
	{
		humnYears=10.5*dogYears;
	}
	cout<<humnYears<<endl;
	
	double a,b,c;
	cin>>a>>b>>c;
	
	if(a==0)
	{
		cout<<"x1->"<<-c/b<<endl;
	}
	else
		if(b*b-4*a*c>=0)
		{
			double D=sqrt(b*b-4*a*c);
			if(D!=0)
			{
				cout<<"x1->"<<(-b-D)/2*a<<endl;
				cout<<"x2->"<<(-b+D)/2*a; 
			}
			else cout<<"x1->"<<b/2*a;
		}
		else 
		{
			cout<<"No solution";
			return 0;
		}
		*/
		
		//6 task
		int number;
		int digit;
		cin>>number;
		cin>>digit;
		bool flag=0;
		if(number)
	return 0;
}



