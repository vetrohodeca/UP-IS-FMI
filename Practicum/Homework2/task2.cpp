#include<iostream>
using namespace std;
const int MAXSIZE=15;
int strlen(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}
void crossedPrint(char* str1, char* str2)
	int len1=strlen(str1);
	int len2=strlen(str2);
	char equalLetter='a';// nqma kak da bude malka, zastoto vhoda e samo ot golemi
	bool breakOutLoop=false;
	for(int i=0;i<len1;i++)
	{
		for(int j=0;j<len2;j++)
		{
			if(str1[i]==str2[j])
			{
				equalLetter=str1[i];
				breakOutLoop=true;
				break;
			}
			if(breakOutLoop==true)
			{
				break;
			}
		}
	}
	if(equalLetter=='a')// nqmat obsti bukvi
	{
		for(int i=0;i<len1;i++)
		{
			cout<<str1[i];
		}
		for(int i=0;i<len2;i++)
		{
			cout<<endl;
			for(int j=0;j<len1;j++)
			{
				cout<<" ";
			}
			cout<<str2[i];	
		}
	}
	else
	{
		int posInFirstWord=0;
		int posInSecondWord=0;
		int pos=0;
		while(str1[pos]!=equalLetter)
		{
			posInFirstWord++;
			pos++;
		}
		pos=0;
			while(str2[pos]!=equalLetter)
		{
			posInSecondWord++;
			pos++;
		}
		for(int i=0;i<posInSecondWord;i++)
		{
			for(int j=0;j<posInFirstWord;j++)
			{
				cout<<" ";
			}
			cout<<str2[i];
			cout<<endl;
		}
		for(int i=0;i<len1;i++)
		{
			cout<<str1[i];
		}
		cout<<endl;
		for(int i=posInSecondWord+1;i<len1;i++)
		{
			for(int j=0;j<posInFirstWord;j++)
			{
				cout<<" ";
			}
			cout<<str2[i];
			cout<<endl;
		}
	}
}
int main()
{
	char str1[MAXSIZE];
	char str2[MAXSIZE];
	cin>>str1;
	cin>>str2;
	crossedPrint(str1,str2);
	return 0;
}
