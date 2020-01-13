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
void toUpper(char& c)
{
	if (c >= 'a' && c <= 'z')
	{
		c += ('A' - 'a');
	}
}
void makeUpper( char* str1,  char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	for (int i = 0; i < len1; i++)
	{
		bool isInSecondArray;
		for (int j = 0; j < len2; j++)
		{
			if (str1[i] == str2[j])
			{
				toUpper(str1[i]);
			}
		}
	}
}
int main()
{
	char str1[100] = "goodsbook";
	char str2[100] = "gbkod";  
	makeUpper(str1,str2); 
	cout<<str1;
	return 0;
}
