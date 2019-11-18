#include<iostream>
#define SIZE 9
using namespace std;

void input(int sudoku[9][9])
{

	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			cin>>sudoku[i][j];
		}
	}
}
void output(int sudoku[9][9])
{
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			cout<<sudoku[i][j]<<"  ";
		}
		cout<<endl;
	}
}
bool validate(int sudoku[9][9])
{
	bool isValid=true;
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			if(sudoku[i][j]<0||sudoku[i][j]>9)
			{
				isValid=false;
			}
		}
	}
	return isValid;
}
void replaceZero(int arr[9])
{
	bool row[9];
	int missingNumber;
	for(int i=0;i<9;i++)
	{
		row[i]=false;
	}
	for(int i=0;i<9;i++)
	{
		row[arr[i]]=true;
	}
		for(int i=0;i<9;i++)
	{
		if(row[arr[i]]==false)
		{
			missingNumber=i;
			cout<<missingNumber;
		}
	}
}
void fillRoll(int arr[9][9])
{
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			if(arr[i][j]==0)
			{
				
			}
		}
	}
}
int main()
{
	int arr[9]={1,2,3,4,0,5,6,7,9};
	replaceZero(arr);
	return 0;
	int sudoku[SIZE][SIZE];
	input(sudoku);
	if(validate(sudoku)==false)
	{
		cout<<"Wrong input!";
		return 0;
	}
	output(sudoku);
	return 0;
}
