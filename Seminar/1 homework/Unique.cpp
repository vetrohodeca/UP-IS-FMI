#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	char a='a';
	cin>>n;
	char str[4];
	str[0]='a'-1;
	str[1]='a'-1;
	str[2]='a'-1;
	bool flag=0;
	n=abs(n);
	{
	
		for(int i=0;i<26;i++)
		{
			str[0]++;
			for(int j=0;j<26;j++)
			{
				str[1]++;
				for(int k=0;k<26;k++)
				{
					str[2]++;
					if(str[0]!=str[1]&&str[0]!=str[2]&&str[1]!=str[2])
					{
						cout<<str<<" ";
						n--;
						if(n==0)
						{
						flag=1;
						break;
						}
					}
				}str[2]-=26;
				if(flag==1)
				{
					break;
				}
			}str[1]-=26;
			if(flag==1)
			{
				break;
			}
		}
	}	
	return 0;
}
