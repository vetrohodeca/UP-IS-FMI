#include<iostream>
#include <stdlib.h>    
#include <time.h>  
using namespace std;
int main()
/* 
//1 task
{
	srand((unsigned)time(0)); 
    int number;
    number = (rand()%100)+1; 
    int guess=-1;
    int counter=0;
    while(true)
    {
    	counter++;
    	cin>>guess;
    	if(guess<number)
    	{
    		cout<<"Try with a bigger number."<<endl;
		}
		else if(guess>number)
		{
			cout<<"Try with a smaller number."<<endl;
		}
		else 
		{
			cout<<"Congrats! You did it! It took you "<<counter<<" attempts to guess the number.";
		}
	}
*/
//2 task
{
	int number;
	cin>>number;
	for(int i=0;i<number;i++)
	{
		for (int j=number;j>number-i;j--)
		{
			cout<<" ";
		}
	 	for(int j=i+1;j<=7;j++)
	 	{
	 		cout<<j;
	    }
		cout<<endl;
	}
	for(int i=2;i<=number;i++)
	{
		for (int j=i;j<number;j++)
		{
			cout<<" ";
		}
	 	for(int j=number-i+1;j<=7;j++)
	 	{
	 		cout<<j;
	    }
		cout<<endl;
	}
	return 0;
}
