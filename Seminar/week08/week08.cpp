#include<iostream>
#define MAXSIZE 1000
using namespace std;
int strlen(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}
void replace(char* str, char oldChar, char newChar)
{
	int len= strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i]==oldChar)
		{
			str[i]=newChar;
		}
	}
}
void remove(char* str, char removeChar)
{
	int len= strlen(str);
	int count=0;
	for(int i=0;i<len;i++)
	{
		if(str[i]==removeChar)
		{
			for(int j=i;j<len-1;j++)
			{
				str[j]=str[j+1];
				count++;
			}
		}
		str[len-count]='\0';
	}
}
bool isPalindrom(char* str)
{
	bool isPalindrome=true;
	for(int i=0;i<strlen(str)/2;i++)
	{
		if(str[i]!=str[strlen(str)-1-i])
		{
			isPalindrome=false;
		}
	}
	return isPalindrome;
}
void reverseStr(char* str)
{
	int len= strlen(str);
		for(int i=0;i<len/2;i++)
	{
		int temp= str[i];
		str[i]=str[len-1-i];
		str[len-1-i]=temp;
	}
}
bool isOnlyEnglishLetters(char*str)
{
	bool isLetters=true;
	int len= strlen(str);
	for(int i=0;i<len;i++)
	{
		if(!(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'))
		{
			isLetters=false;
		}
	}
	return isLetters;
}
int strToInt(char* str)
{
	int number=0;
	int len= strlen(str);
	int multiplyer=1;
	for(int i=len-1;i>=0;i--)
	{
		if(str[i]<'0'||str[i]>'9')
		{
			return -1;
		}
		int currentDigit=str[i]-'0';
		number+=currentDigit*multiplyer;
		multiplyer*=10;
	}
	return number;
}
	void strCopy(char* str1, char* str2)
	{
		int len1=strlen(str1);
		int len2=strlen(str2);
		for(int i=len1;i<len1+len2;i++)
		{
			str1[i]=str2[i-len1];
		}
		str1[len1+len2]='\0';
	}

int main()
{
	char str[MAXSIZE]="123";
	char str2[MAXSIZE]="456";
	strCopy(str,str2);
	cout<<strToInt(str);
	return 0;
}
