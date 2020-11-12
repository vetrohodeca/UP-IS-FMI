#include<iostream>
using namespace std;
const int maxLength = 20;
const int hoursInDay = 24;
const int minutesInHour = 60;
const int secondsInMinute = 60;
const int secondsInHour = 60 * 60;
const int secondsInDay = 60 * 60 * 24;
const int secondsInLeapYear = secondsInDay * 366;
const int secondsInNotLeapYear = secondsInDay * 365;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
bool isLeapYear(int year)
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int pastDaysInYear(int day, int month, int year)
{
	int pastDays = 0;
	switch (month)
	{
	case 1: pastDays = day - 1; break;
	case 2: pastDays = 31 + day - 1; break;
	case 3: pastDays = 31 + 28 + day - 1; break;
	case 4: pastDays = 2 * 31 + 28 + +day - 1; break;
	case 5: pastDays = 2 * 31 + 28 + 30 + day - 1; break;
	case 6: pastDays = 3 * 31 + 28 + 30 + day - 1; break;
	case 7: pastDays = 3 * 31 + +28 + 2 * 30 + day - 1; break;
	case 8: pastDays = 4 * 31 + 28 + 2 * 30 + day - 1; break;
	case 9: pastDays = 5 * 31 + 28 + 2 * 30 + day - 1; break;
	case 10: pastDays = 5 * 31 + 28 + 3 * 30 + day - 1; break;
	case 11: pastDays = 6 * 31 + 28 + 3 * 30 + day - 1; break;
	case 12: pastDays = 6 * 31 + 28 + 4 * 30 + day - 1; break;
	}
	if (isLeapYear(year) && month > 2)
	{
		pastDays++;
	}
	return pastDays;
}

long long secondsFromBeging(int day, int month, int year, int hour, int minutes, int seconds)
{
	long long totalSeconds = 0;
	int counterOfLeapYears = 0;
	for (int i = 0; i < year; i++)
	{
		if (isLeapYear(i))
		{
			counterOfLeapYears++;
		}
	}
	int counterOfNonLeapYears = year - counterOfLeapYears;
	totalSeconds = (long long)counterOfLeapYears * (long long)secondsInLeapYear +
		(long long)counterOfNonLeapYears * (long long)secondsInNotLeapYear +
		(pastDaysInYear(day, month, year)) * (long long)secondsInDay +
		(long long)hour * (long long)secondsInHour +
		(long long)minutes * (long long)secondsInMinute + (long long)seconds;
	return totalSeconds;
}
bool isValidDate(int day, int month, int year, int hour, int minutes, int seconds)
{
	bool isValid = true;
	if (month > 12 || month < 1)
	{
		isValid = false;
	}
	if (year > 9999 || year < 0)
	{
		isValid = false;
	}
	if (hour > 23 || hour < 0)
	{
		isValid = false;
	}
	if (minutes > 59 || minutes < 0)
	{
		isValid = false;
	}
	if (seconds > 59 || seconds < 0)
	{
		isValid = false;
	}
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		if (day > 31 || day < 1)
		{
			isValid = false;
		}
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day > 30 || day < 1)
		{
			isValid = false;
		}
		if (month == 2 && isLeapYear(year))
		{
			if (day > 29 || day < 1)
			{
				isValid = false;
			}
		}
		if (month == 2 && !isLeapYear(year))
		{
			if (day > 28 || day < 1)
			{
				isValid = false;
			}
		}
	}
	return isValid;
}
void NextDay(int& day, int& month, int& year)
{
	day++;
	if (isLeapYear)
	{
		if (month == 1 && day > 31 || month == 2 && day > 29 || month == 3 && day > 31 || month == 4 && day > 30 || month == 5 && day > 31 || month == 6 && day > 30 ||
			month == 7 && day > 31 || month == 8 && day > 31 || month == 9 && day > 30 || month == 10 && day > 31 || month == 11 && day > 30 || month == 12 && day > 31)
		{
			day = 1;
			month++;
		}
	}
	else
	{
		if (month == 1 && day > 31 || month == 2 && day > 28 || month == 3 && day > 31 || month == 4 && day > 30 || month == 5 && day > 31 || month == 6 && day > 30 ||
			month == 7 && day > 31 || month == 8 && day > 31 || month == 9 && day > 30 || month == 10 && day > 31 || month == 11 && day > 30 || month == 12 && day > 31)
		{
			day = 1;
			month++;
		}
	}
	if (month > 12)
	{
		month = 1;
		year++;
	}
}
void addDays(int& day, int& month, int& year, int days)
{
	for (int i = 0; i < days; i++)
	{
		NextDay(day, month, year);
	}

}

void printDifferenceFormatted(long long seconds, int dd1, int dd2, int mm1, int mm2, int yyyy1, int yyyy2)
{
	long long days = seconds / secondsInDay;
	cout <<"Dni za test "<< days<<endl;
	if (days == 0)
	{
		long long hours = seconds / secondsInHour;
		seconds -= secondsInHour * hours;
		long long minutes = seconds / minutesInHour;
		seconds -= minutes * minutesInHour;
		cout << hours << ":" << minutes << ":" << seconds;
	}
	else
	{
		int resultDay = 1, resultMonth = 1, resultYear = 1;
		long long days = seconds / secondsInDay;
		seconds -= secondsInDay * days;
		int currDays=0;
		while (yyyy1 != yyyy2 || dd1 != dd2 || mm1 != mm2)
		{
			if (days == currDays)
			{
				break;// v sluchai che si rodena po - rano ot men da ne dobavq denq
			}
			NextDay(dd1, mm1, yyyy1);
			NextDay(resultDay, resultMonth, resultYear);
			currDays++;
		}
		resultDay -= 1;
		resultMonth -= 1;
		resultYear -= 1;
		long long hours = seconds / secondsInHour;
		seconds -= secondsInHour * hours;
		long long minutes = seconds / minutesInHour;
		seconds -= minutes * minutesInHour;
		cout << resultYear << " " << resultMonth << " " << resultDay << ' ' << hours << ':' << minutes << ':' << seconds;

	}
}

int main()
{
	char gosho[]="tes";
	char line1[maxLength];
	char line2[maxLength];
	int output[maxLength];
	int dd1, dd2, mm1, mm2, yyyy1, yyyy2, HH1, HH2, MM1, MM2, SS1, SS2;
	//cout << "Input first date in format dd.mm.yyyy hh:mm::ss";
	//cin.getline(line1, 20);
	cin >> dd1 >> mm1 >> yyyy1 >> HH1 >> MM1 >> SS1 >> dd2 >> mm2 >> yyyy2 >> HH2 >> MM2 >> SS2;
	//cout << "Input second date in format dd.mm.yyyy hh:mm::ss";
	if (!(isValidDate(dd1, mm1, yyyy1, HH1, MM1, SS1) && isValidDate(dd2, mm2, yyyy2, HH2, MM2, SS2)))
	{
		cout << "Invalid date!";
	}
	long long difference;
	long long secondsFromBeging1 = secondsFromBeging(dd1, mm1, yyyy1, HH1, MM1, SS1);
	long long secondsFromBeging2 = secondsFromBeging(dd2, mm2, yyyy2, HH2, MM2, SS2);
	if (secondsFromBeging1 > secondsFromBeging2)
	{
		difference = secondsFromBeging1 - secondsFromBeging2;
		swap(dd1, dd2);
		swap(mm1, mm2);
		swap(yyyy1, yyyy2);
	}
	else
	{
		difference = secondsFromBeging2 - secondsFromBeging1;
	}
	printDifferenceFormatted(difference, dd1, dd2, mm1, mm2, yyyy1, yyyy2);
	return 0;
}
