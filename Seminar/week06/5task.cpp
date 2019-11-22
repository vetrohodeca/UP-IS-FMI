#include<iostream>
using namespace std;
int main()
{
	char letters[26];
	for(int i=0;i<26;i++)
	{
		letters[i]='a'+i;
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
		for(int j=0;j<26;j++)
		{
			if(arr[i]==letters[j])
			{
				cout<<j+1<<" ";break;
			}
		}
		i++;
	}
	return 0;
}
