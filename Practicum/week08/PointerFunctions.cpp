#include<iostream>
using namespace std;
void swap(int &a, int&b)
{
	a=a xor b;
	b=b xor a;
	a=b xor a;
}
void print(int* arr, int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void reverseArray(int* arr, int size)
{
	for(int i=0;i<size/2;i++ )
	{
		swap(arr[i],arr[size-1-i]);
	}
}
void transposed(int **matrixOne, int rowsOne, int cowsOne, int** matrixTwo, int rowsTwo, int colsTwo)
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
			return arr + i*sizeof(int*) ;
		}
	}
	return 0;//nullptr
}
int sumOfDigit(int number)
{
	int sum=0;
	while(number!=0)
	{
		sum+=number%10;
		number/=10;
	}
	return sum;
}
void sortBySumOfDigits(int* arr, int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=i;j<size;j++)
		{
			if(sumOfDigit(arr[i])>sumOfDigit(arr[j]))
			{
				swap(arr[i],arr[j]);	
			}
			if(sumOfDigit(arr[i])==sumOfDigit(arr[j]))
			{
				if(arr[j]<arr[i])
				{
					swap(arr[i],arr[j]);
				}
			}
		}	
	}
}
int main()
{
	int array[] = { 203, 189, 41, 900, 666};
    sortBySumOfDigits(array, 5);
    print(array, 5); // 41 203 900 189 666
    int* matrix1 [10] ;
    int* matrix2 [10] ;
    for(int i=0;i<3;i++)
    {
    	for(int j=0;j<3;j++)
    	{
    		cin>>matrix1[i][j];
		}
	}
	transposed(matrix1,3,3,matrix2,3,3);
	 for(int i=0;i<3;i++)
    {
    	for(int j=0;j<3;j++)
    	{
    		cout<<matrix2[i][j];
		}
	}
	return 0;
}
