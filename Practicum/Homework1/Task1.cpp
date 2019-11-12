#include<iostream>
#define MAXSIZE 100
using namespace std;
int main()
{
	int arr[MAXSIZE];
    int number;
	do
	{
		cin>>number;
	}
	while(number<1||number>100);
    int rotations;
    do 
    {
    	cin>>rotations;
	}
    while(rotations<0);
    rotations = rotations % number;         
    for(int i=0;i<number;i++)
    {
    	cin>>arr[i];
	}
	for (int i = 0; i < rotations; i++)
    {
        int temp = arr[0];
        for (int j = 0; j < number-1; j++)
        {    
	    	arr[j] = arr[j+1];                   
        
		}
        arr[number - 1] = temp;
	}
        for(int i=0;i<number;i++)
        {
       		cout<<arr[i]<<" ";
	    }
	return 0;
}
