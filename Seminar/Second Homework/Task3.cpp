#include <iostream>
using namespace std;
bool isDigit(char c)
{
	return c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z';
}
int strlen(char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}
char* longestWord(char* str)
{
	int maxWordLentgth = 0;
	char* beginningOfLongestWord = 0;
	int i = 0;
	int currentWordLength = 0;
	while (str[i] != '\0')
	{
		if (isDigit(str[i]))
		{
			currentWordLength++;
			if (currentWordLength > maxWordLentgth)
			{
				maxWordLentgth = currentWordLength;
				beginningOfLongestWord = str + i - maxWordLentgth + 1;// ot kraq na dumata vadim duljinata i +1 zaadi space 
				// tova ni dava ukazatel ot dumata nadqsno v masiva, t.e trqbwa da mahnem sledvashtite dumi
			}
		}
		else currentWordLength = 0;
		i++;
	}
	int len2 = strlen(beginningOfLongestWord);
	for (int k = 0; k <len2; k++)
	{
		if (beginningOfLongestWord[k] == ' ')
		{
			beginningOfLongestWord[k] = '\0';
		}

	}
	return beginningOfLongestWord;
}
int main()
{
	char str1[100] = "My name is Alex";
	char str2[100] = "My name is Alexander";  
	cout<<longestWord(str1)<<endl<<longestWord(str2);
	return 0;
}
