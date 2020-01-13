#include<iostream>
using namespace std;
const int MAXSIZE=1000;
int strlen(char str[MAXSIZE])
{
	int i=0;
	while (str[i]!='\0')
	{
		i++;
	}
	return i;
}
int lenOfNewNick(char nickname[MAXSIZE])
{
	int len= strlen(nickname);
	int countOfRemovedWords=0;
	for(int i=0;i<len;i++)
	{
		if((nickname[i]=='a'||nickname[i]=='e'||nickname[i]=='i'||nickname[i]=='o'||nickname[i]=='u')&&//ima 2 posledovatelni glasni
		(nickname[i+1]=='a'||nickname[i+1]=='e'||nickname[i+1]=='i'||nickname[i+1]=='o'||nickname[i+1]=='u'))
		{
			countOfRemovedWords++;
		}
	}
	return len-countOfRemovedWords;
}
int main()
{
	char nickname [MAXSIZE] ;
	cin>>nickname;
	cout<<lenOfNewNick(nickname);
	return 0;
}
