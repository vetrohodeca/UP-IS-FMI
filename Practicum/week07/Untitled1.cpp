#include<iostream>
using namespace std;
void swap(int &a, int&b)
{
	a=a xor b;
	b=b xor a;
	a=b xor a;
}
void reverseArray(int* arr, int size)
{
	for(int i=0;i<size/2;i++ )
	{
		swap(arr[i],arr[size-1-i]);
	}
}
void transposed(int matrixOne[][100], int rowsOne, int cowsOne, int matrixTwo[][100], int rowsTwo, int colsTwo)
{
	for(int i=0;i<rowsOne;i++)
	{
		for(int j=0;j<rowsTwo;j++)
		{
			matrixTwo[j][i]=matrixOne[i][j];
		}
	}
}
bool remove(int* arr,int size, int number)
{
	int count=0;
	for(int i=0;i<size-count;i++)
	{
		if(arr[i]==number)
		{
			count++;
			for(int j=i;j<size-1;j++)
			{
				arr[j]=arr[j+1];
			}
		}
	}
	if(count==0)
	{
		return false;
	}
	return true;
}
int* find(int* arr, int size, int number)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==number)
		{
			return *(arr+i);
		}
	}
	return nullptr;
}
int main()
{
   int* n=find({1,2,3},3,2);
	return 0;
}
