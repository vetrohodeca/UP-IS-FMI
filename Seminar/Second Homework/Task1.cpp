#include <iostream>
using namespace std;
int strlen(char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}
bool isSubstring(char* str1, char* str2, int index, int len, bool flag)
{
	flag = 0;
	int len2 = strlen(str2);
	for (int i = 0; i < len2; i++)
	{
		if (str1[index] == str2[i])
		{
			flag = 1;
		}
	}
	if (flag == 0)
	{
		return 0;
	}
	if (len == index+1)
	{
		if (flag == 0)
		{
			return false;
		}
		return true;
	}
	else return isSubstring(str1, str2, index + 1, len, flag);
}
int main()
{
	char str1[100] = "goodbook";
	char str2[100] = "gbkod";   
	int len=strlen(str1);
	cout<<isSubstring(str1,str2,0,len,0);
	return 0;
}
