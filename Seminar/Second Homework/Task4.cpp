#include<iostream>
using namespace std;
const int MAXSIZE=100;
void rotate(int matrix[MAXSIZE][MAXSIZE], int n, int repeats)
{
	for (int i = 0; i < repeats; i++)
	{
		int temp1 = matrix[0][0];
		int temp2 = matrix[0][n-1];
		int temp3 = matrix[n-1][0];
		int temp4 = matrix[n-1][n-1];
		matrix[0][0] = temp3;
		matrix[0][n - 1] = temp1;
		matrix[n - 1][0] = temp4;
		matrix[n - 1][n - 1] = temp2;

		int temp5 = matrix[1][1];
		int temp6 = matrix[1][n - 2];
		int temp7 = matrix[n - 2][1];
		int temp8 = matrix[n - 2][n - 2];
		
		matrix[1][1] = temp6;
		matrix[1][n - 2] = temp8;
		matrix[n - 2][1] = temp5;
		matrix[n - 2][n - 2] = temp7;
	}
}
void printMatrix(int matrix[MAXSIZE][MAXSIZE],int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix[i][j]<<" ";
		}
		cout << endl;
	}
}
int main()
{
	int matrix[MAXSIZE][MAXSIZE] =
	{
	{1,  2,  3,  4,  5},
	{4,  5, 6,  7,  8 },
	{3,  4,  5,  9,  0},
	{5,  6,  9,  1,  2},
	{6,  10, 11, 0,  1},
	};
	rotate(matrix, 5, 1);
	printMatrix(matrix, 5);
	return 0;
}
