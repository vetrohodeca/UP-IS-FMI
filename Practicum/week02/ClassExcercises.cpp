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
	if(year%4==0&&year%100==0&&year%400==0)
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
		
		
		//6 task
	/*	int number;
		int digit;
		cin>>number;
		cin>>digit;
		bool flag=0;
		if(number%10==digit|| number/10%10==digit||number/100%10==digit||number/1000%10==digit||number/10000%10==digit)
		{
			flag=true;
		}
		cout<<boolalpha<<flag;
		*/
		
		//7 task
	/*	int number;
		cin>>number;
		switch (number)
		{
			case 1:
			cout<<"winter"<<endl;break;
		case 2: 
			cout<<"winter"<<endl;break;
		case 3:
			cout<<"winter"<<endl;break;
		case 4:
			cout<<"spring"<<endl;break;
		case 5:
			cout<<"spring"<<endl;break;
		case 6:
			cout<<"spring"<<endl;break;
		case 7:
			cout<<"summer"<<endl;break;
		case 8: 
			cout<<"summer"<<endl;break;
		case 9: 
			cout<<"summer"<<endl;break;
		case 10:
			cout<<"winter"<<endl;break;		
		case 11: 
			cout<<"winter"<<endl;break;		
		case 12:
			cout<<"winter"<<endl;break;
		default:
			cout<<"There is no such month"<<endl;
		}		
		*/
		
		//8 task
		/*	int number;
		cin>>number;
		switch (number)
		{
			case 1:
			cout<<"31"<<endl;break;
		case 2: 
			cout<<"28"<<endl;break;
		case 3:
			cout<<"31"<<endl;break;
		case 4:
			cout<<"30"<<endl;break;
		case 5:
			cout<<"31"<<endl;break;
		case 6:
			cout<<"30"<<endl;break;
		case 7:
			cout<<"31"<<endl;break;
		case 8: 
			cout<<"31"<<endl;break;
		case 9: 
			cout<<"30"<<endl;break;
		case 10:
			cout<<"31"<<endl;break;		
		case 11: 
			cout<<"30"<<endl;break;		
		case 12:
			cout<<"31"<<endl;break;
		default:
			cout<<"There is no such month"<<endl;
		}
		*/
		/*
		char symbol;
		int digit1;
		int digit2;
		cin>>symbol>>digit1>>digit2;
		if(symbol=='+')
		{
			cout<<digit1+digit2<<endl;
		}
		else if(symbol=='-')
		{
			cout<<digit1-digit2<<endl;
		}
		else if(symbol=='*')
		{
			cout<<digit1*digit2<<endl;
		}
		else if(symbol=='/')
		{
			cout<<digit1/digit2<<endl;
		}
		else if(symbol=='%')
		{
			cout<<digit1%digit2;
		}
		else 
		{
			cout<<"Invalid operator";
		}
		*/
		
		//10 task
		/*
		char symbol;
		cin>>symbol;
		if(symbol>=48&&symbol<=57)
		{
			cout<<(int)(symbol-48)*(int)(symbol-48);
		}
		else if(symbol>=97&&symbol<=122)
		{
			cout<<(char)(symbol-32);
		}*/
		//11 task
		
		int month;
		int day;
		cin>>day>>month;
		int remeaningDays;
		if(day<=0||day>31)
		{
			cout<<"There is no such day";
			return 0;
		}
		if(month<=0||month>12)
		{
			cout<<"There is no such month";
			return 0;
		}
		int daysInMonth;
		switch (month)
		{
			case 1:
				remeaningDays=335;
				daysInMonth=31;break;
				
			case 2:
				daysInMonth=29;
				remeaningDays=306;break;				
			case 3:
				daysInMonth=31;
				remeaningDays=275;break;
			case 4:
				remeaningDays=245;
				daysInMonth=30;break;
			case 5:
				remeaningDays=214;
				daysInMonth=31;break;
			case 6:
				remeaningDays=183;
				daysInMonth=30;break;
			case 7:
				remeaningDays=153;
				daysInMonth=31;break;
			case 8:
				remeaningDays=122;
				daysInMonth=31;break;
			case 9:
				remeaningDays=92;
				daysInMonth=30;break;
			case 10:
				remeaningDays=61;
				daysInMonth=31;break;
			case 11:
				daysInMonth=30;
				remeaningDays=31;break;
			case 12:
				remeaningDays=0;
				daysInMonth=31;break;
		}
		remeaningDays+=daysInMonth-day;
		        cout<<remeaningDays<<endl;
		
	return 0;
}



