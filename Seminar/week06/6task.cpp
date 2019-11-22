#include<iostream>
using namespace std;
int main()
{
    int letters[26];
	for(int i=0;i<26;i++)
	{
		letters[i]=0;
	}
	char arr[1000];
	int i=0;
	do 
	{
		cin>>arr[i];
		i++;
	}
	while (arr[i-1]!='.');
	i=0;
	while (arr[i]!='.')
	{
		letters[arr[i]-97]++;
		i++;
	
	}
	for(int i=0;i<26;i++)
	{
		if(letters[i]!=0)
		cout<<char(97+i)<<" "<<letters[i]<<endl;
	}
	return 0;
}
