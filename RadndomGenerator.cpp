#include<iostream>
#include <time.h>
#include <stdlib.h> 
using namespace std;
int main()
{
	srand ( time(NULL) );
	for (int t=0;t<10;t++)
	{
    	int random_x;
    	
    	random_x = rand() % 3;
    	cout<<"\nRandom X = "<<random_x;
	} 
	return 0;
}
