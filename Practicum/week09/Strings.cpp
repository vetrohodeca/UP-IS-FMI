#include<iostream>
using namespace std;
int strLength(char* str)
{
    int counter=0;
    while(str[counter]!='\0')
    {
        counter++;
    }
    return counter;
}
void replaceSymbol(char* str, char oldChar, char newChar)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==oldChar)
        {
            str[i]=newChar;
        }
        i++;
    }
}
void removeSymbol(char*str, char oldChar)
{
     int i=0;
     int len= strLength(str);
    while(str[i]!='\0')
    {
        if(str[i]==oldChar)
        {
            for(int j=i;j<len-1;j++)
            {
                str[j]=str[j+1];
            }
            str[len-1]='\0';
        }
        i++;
    }
}
bool isPalindrome(char* str)
{
    bool isPalindrome=true;
    int len= strLength(str);
    for(int i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-1-i])
        {
            isPalindrome=false;
        }
    }
    return isPalindrome;
}
void swapChars(char &a,char&b)
{
    char temp= a;
    a=b;
    b=temp;
}
void reverseString(char*str)
{
    int len= strLength(str);
    for(int i=0;i<len/2;i++)
    {
        swap(str[i],str[len-1-i]);
    }
}
char getFirstUniqueChar(char* str)
{
    bool isUnique=true;
    int len= strLength(str);
    for(int i=1;i<len;i++)
    {
        if(str[i]==str[0])
        {
            isUnique=false;
        }
        if(isUnique==true)
        {
            return str[0];
        }
    }
    isUnique=true;
    isUnique=true;
    for(int i=1;i<len-1;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(str[i]==str[j])
            {
                isUnique=false;
            }
        }
        for(int k=i-1;k>=0;k--)
        {
            if(str[i]==str[k])
            {
                isUnique=false;
            }
        }
        if(isUnique==true)
        {
            return str[i];
        }
        isUnique=true;
    }
    for(int i=0;i<len-1;i++)
    {
        if(str[i]==str[len-1])
        {
            isUnique=false;
        }
        if(isUnique==true)
        {
            return str[len-1];
        }
    }
}
char* concat(char* first, char*second, char* result)
{
    int len1=strLength(first);
    int len2=strLength(second);
    int j=0;
    for(int i=0;i<len1;i++)
    {
        result[j]=first[i];
        j++;
    }
    for(int i=0;i<len2;i++)
    {
         result[j]=second[i];
        j++;
    }
    result[j+1]='\0';
    return result;
}
int main()
{
    char arr[]="abcdsc";
    int len=strLength(arr);
    replaceSymbol(arr,'c','k');
    cout<<arr<<endl;
    cout<<len<<endl;
    removeSymbol(arr,'b');
    cout<<arr<<endl;
    cout<<len<<endl;
    char palindrome[] = "abababa";
char random[] = "abc";
reverseString(random);
cout<<endl;
cout<<random<<endl;
cout<<isPalindrome(palindrome); // true
cout<<isPalindrome( result[j]=first[i];
        j++;random); // false
cout<<endl;
char array[] = "aabbccdde";
cout<<getFirstUniqueChar(array)<<endl;

char first[] = "abc";
char second[] = "def";
char result[strLength(first) + strLength(second)];
concat(first, second, result);// abcdef
cout<<result;
    return 0;
}
