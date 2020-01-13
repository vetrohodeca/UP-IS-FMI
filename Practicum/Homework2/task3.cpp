#include<iostream>
using namespace std;
const int MAXSIZE=1000;
int strlen(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}
char* concat(char* str1, char* str2)
{
	int len1=strlen(str1);
	int len2=strlen(str2);

	for(int i=0;i<len2;i++)
	{
		str1[i+len1]=str2[i];
	}
	str1[len1+len2+1]='\0';
}
int main()
{
	char str1[MAXSIZE];
	char str2[MAXSIZE];
	cin>>str1;
	cin>>str2;
	concat(str1,str2);
	cout<<str1;
	return 0;
}
