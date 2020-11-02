#include<iostream>
using namespace std;
int main()
{
	int day,month, year, countOfLeapYears=0,countOfDays=0, daysLeft;
	cin>>day>>month>>year;
	if (month < 1 || month > 12||day < 1 || day > 31 || (month == 2 && day >= 29) || (month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
	{
		cout << "Wrong date!" << endl; 
	}
	else
	{
		switch (month)
		{
			case 1: daysLeft = 7 * 31 + 28 + 4 * 30 - day; break;
			case 2: daysLeft = 6 * 31 + 4 * 30 + 28 - day; break;
			case 3: daysLeft = 6 * 31 + 4 * 30 - day; break;
			case 4: daysLeft = 5 * 31 + 4 * 30 - day; break;
			case 5: daysLeft = 5 * 31 + 3 * 30 - day; break;
			case 6: daysLeft = 4 * 31 + 3 * 30 - day; break;
			case 7: daysLeft = 4 * 31 + 2 * 30 - day; break;
			case 8: daysLeft = 3 * 31 + 2 * 30 - day; break;
			case 9: daysLeft = 2 * 31 + 2 * 30 - day; break;
			case 10: daysLeft = 2 * 31 + 30 - day; break;
			case 11: daysLeft = 31 + 30 - day; break;
			case 12: daysLeft = 31 - day;
		}
		for(int i=1900;i<year;i++)
		{
		if((i%4==0&&i%100!=0)||i%400==0)
			{
				countOfLeapYears++;
			}
		}	
		if((year%4==0&&year%100!=0)||year%400==0)
		{
			countOfDays= countOfLeapYears*366+(year-1900-countOfLeapYears)*365+(366-daysLeft);	
		}
		else
		{
			countOfDays= countOfLeapYears*366+(year-1900-countOfLeapYears)*365+(365-daysLeft);		
		}
		if(day==31&& month==1||day==31&& month==3||day==30&& month==4||day==31&& month==5||day==30&& month==6||day==31&&month==7||
			   day ==31&&month==8||day==30&&month==9||day==31&&month ==10||day==30&&month==11)
			{
				day=1;
				month++;
			}
			else if((year%4==0&&year%100!=0||year%400==0)&&day==29&& month==2)
			{
				day=1;
				month++;
			}
			else if(!((year%4==0&&year%100!=0)||year%400==0)&&day==28&&month==2)
			{
				day=1;
				month++;
			}
			else if(day==31&&month==12)
			{
				year+=1;
				month =1;
				day=1;
			}
			else
			{
				day++;
			}
			cout<<countOfDays<<endl;
		int reminder= countOfDays%7;
		cout<<"Next day is: "<<day<<" "<<month<<" "<<year<<" ";
		switch(reminder)
		{
			case 0: cout<<"Monday";break;
			case 1: cout<<"Tuesday";break;
			case 2: cout<<"Wednesday";break;
			case 3: cout<<"Thursday";break;
			case 4: cout<<"Friday";break;
			case 5: cout<<"Saturday";break;
			case 6: cout<<"Sunday";break;
		}
	}
	return 0;
}
