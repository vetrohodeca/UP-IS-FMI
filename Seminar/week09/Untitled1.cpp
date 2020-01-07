#include<iostream>
using namespace std;
void reverseArray(int* arr, int size)
{
	for(int i=0;i<size/2;i++)
	{
		int temp= arr[size-1-i];
		arr[size -1-i]=arr[i];
		arr[i]=temp;
	}
} 
void multiplyMatrixWithScalar(int matrix[][3],int scalar, int rows, int cows)
{
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cows;j++)
		{
			matrix[i][j]*=scalar;
		}
	}
}
int main()
{                               
	int arr[5]={1,2,3,4,5};
	int matrix[3][3]={1,2,3,4,5,6,7,8,9};
	//cout<<2[arr];
	 //arr[2] =*(arr+2) =*(2+arr)= 2[arr]
	reverseArray(arr,5);
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<< "  ";
	}
	cout<<endl;
		multiplyMatrixWithScalar( matrix,5,3,3);
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<matrix[i][j]<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
