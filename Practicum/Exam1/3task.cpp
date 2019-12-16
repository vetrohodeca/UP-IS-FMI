#include<iostream>
using namespace std;
const int MATRIXMAXSIZE=69;
int main()
{
	int matrix[MATRIXMAXSIZE][MATRIXMAXSIZE];
	int matrixSize;
	int negativeSum=0;//under diagonal
	int positiveSum=0;//above diagonal
	cout<<"enter matrix size: ";
	cin>>matrixSize;
	cout<<"enter matrix: ";
	for(int i=0;i<matrixSize;i++)
	{
		for(int j=0;j<matrixSize;j++)
		{
			cin>>matrix[i][j];
		}
	}
	for(int i=0;i<matrixSize;i++)
	{
		for(int j=0;j<matrixSize;j++)
		{
			if(j>i&&matrix[i][j]>0)
			{
				positiveSum+=matrix[i][j];
			}
			if(i>j&& matrix[i][j]<0)
			{
				negativeSum+=matrix[i][j];
			}
		}
	}
	cout<<"sum of negative elements: "<<negativeSum<<endl;
	cout<<"sum of positive elements: "<<positiveSum<<endl;
	return 0;
}
