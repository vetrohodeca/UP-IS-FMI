#include<iostream>
#define SIZE 9
using namespace std;

void input(int sudoku[9][9])
{

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> sudoku[i][j];
		}
	}
}
void output(int sudoku[9][9])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << sudoku[i][j] << "  ";
		}
		cout << endl;
	}
}
bool validate(int sudoku[9][9])
{
	bool isValid = true;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (sudoku[i][j] < 0 || sudoku[i][j]>9)
			{
				isValid = false;
			}
		}
	}
	return isValid;
}
void replaceZero(int arr[9])
{
	bool row[9];
	int missingNumber;
	int counter = 0;
	for (int i = 0; i < 9; i++)
	{
		row[i] = false;
	}
	for (int i = 0; i < 9; i++)
	{
		if (arr[i] != 0)
		{
			row[arr[i] - 1] = true;
		}
	}
	for (int i = 0; i < 9; i++)// proverka za dali ima poveche ot 2 0
	{
		if (row[i] == false)
		{
			counter++;
		}
	}
	if (counter != 1)
	{
		return;
	}
	for (int i = 0; i < 9; i++)
	{
		if (row[i] == false)
		{
			missingNumber = i + 1;
		}
	}
	for (int i = 0; i < 9; i++)
	{
		if (arr[i] == 0)
		{
			arr[i] = missingNumber;
		}
	}
}
void replaceZeroInBoxes(int arr[9][9])
{
	int sum = 0;
	int counter = 0;
	int cowOfZero;
	int rowOfZero;
	for (int f = 0;f < 3; f++)
	{


		for (int k = 0; k < 3; k++)
		{
			sum = 0;
			counter = 0;
			for (int i = 0 + 3 * f; i < 3 + 3 * f; i++)
			{
				for (int j = 0 + 3 * k; j < 3 + 3 * k; j++)
				{
					sum += arr[i][j];
					if (arr[i][j] == 0)
					{
						cowOfZero = j;
						rowOfZero = i;
						counter++;
					}
				}
			}
			if (counter != 1)
			{
				continue;
			}
			int missingElement = 45 - sum;
			arr[rowOfZero][cowOfZero] = missingElement;
		}
	}
}
int main()
{
	int temparr[9];
	int sudoku[SIZE][SIZE];
	input(sudoku);
	if (validate(sudoku) == false)
	{
		cout << "Wrong input!";
		return 0;
	}
	for (int i = 0; i < 9; i++)//populva po redove
	{
		for (int j = 0; j < 9; j++)
		{
			temparr[j] = sudoku[i][j];
		}
		replaceZero(temparr);
		for (int j = 0; j < 9; j++)
		{
			sudoku[i][j] = temparr[j];
		}
	}
	for (int i = 0; i < 9; i++)//popuvla po koloni
	{
		for (int j = 0; j < 9; j++)
		{
			temparr[j] = sudoku[j][i];
		}
		replaceZero(temparr);
		for (int j = 0; j < 9; j++)
		{
			sudoku[j][i] = temparr[j];
		}
	}
	// po kutii
	replaceZeroInBoxes(sudoku);
	cout << endl;
	output(sudoku);
	return 0;
}