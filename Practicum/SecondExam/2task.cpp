#include<iostream>
using namespace std;
const int MAXSIZE=20;
bool isMagicSquare(int matrix[MAXSIZE][MAXSIZE],int size)
{
	bool isMagicSquare=true;
	int sumOfSecondaryDiagonal=0;
	for(int i=0;i<size;i++)
	{
		sumOfSecondaryDiagonal+=matrix[i][size-1-i];
	}
	for(int col=0;col<size;col++)
	{
		int sumOfCol=0;
		for(int row=0;row<size;row++)
		{
			sumOfCol+=matrix[col][row];
		}
		if(sumOfCol!=sumOfSecondaryDiagonal)
		{
			isMagicSquare=false;
		}
	}
	return isMagicSquare;
}
int main()
{
	int matrix[20][20];
	int size;
	do
	{
		cin>>size;
	}
	while(size>20||size<1);
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			cin>>matrix[i][j];
		}
	}
	cout<<boolalpha<<isMagicSquare(matrix,size);
	return 0;
}
