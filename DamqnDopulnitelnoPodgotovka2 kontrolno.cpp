#include<iostream>
using namespace std;
void toLower(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			str[i]-=('Z'-'z');	
		}
		i++;
	}
}
bool isAnagrams(char* str1, char* str2)
{
	toLower(str1);
	toLower(str2);
	int numberOfSymbols1=0;
	int numberOfSymbols2=0;
	int hystogram1[26];
	int hystogram2[26];
	for(int i=0;i<26;i++)
	{
		hystogram1[i]=0;
		hystogram2[i]=0;
	}
	int i=0;
	while(str1[i]!='\0')
	{
		int j=str1[i]-'a';
		hystogram1[j]++;
		i++;
	}
	i=0;
	while(str2[i]!='\0')
	{
		int j=str2[i]-'a'; 
		hystogram2[j]++;
		i++;
	}
		bool isAnagram=true;
		for(int i=0;i<26;i++)
		{
			if(hystogram1[i]!=hystogram2[i])
			{	
				isAnagram=false;
			}
		}
		return isAnagram;
} 

// recursion
 
double getMult(double arr[],int size) {
  if(size == 1) {
    return 1;
  }
  if(size == 2) {
    if(arr[0]>arr[1] && arr[1] > 0) {
        return arr[1];
    }
    return 1;
  }

  if(arr[0]> arr[1] && arr[1] > 0){
    return arr[1] * getMult(arr+1,size-1);
  }
  return getMult(arr+1,size-1);
}


void testGetMult() {
  double arr[100];
  int n;
  cin>>n;
  for(int i = 0;i<n;i++ ){
    cin>> arr[i];
  }
  cout<<getMult(arr,n)<<endl;
}
int main()
{
	testGetMult();
	char str1[199]="A B B A s";
	char str2[199]="baba";
//	cout<<isAnagrams(str1, str2);
	return 0;
}
