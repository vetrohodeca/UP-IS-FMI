
#include <iostream>
#include <stdlib.h>     
#include <time.h>
using namespace std;
const int SIZE = 9;
void initializingTheBoard(char arr[][SIZE],int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			arr[i][j] = ' ';
		}
	}
}
void displayingTheBoard(char arr[][SIZE], int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << '[' << arr[i][j] << ']';
		}
		cout << endl;
	}
}
bool rowWinner(char arr[][SIZE], int n,char symbol) {
	bool flag = false;
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j]==symbol)
			{
				counter++;
			}
		}
		if (counter == n)
		{
			flag = true;
			break;
		}
		else
		{
			counter = 0;
		}
	}
	return flag;
}
bool colWinner(char arr[][SIZE], int n, char symbol) {
	bool flag = false;
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[j][i] == symbol)
			{
				counter++;
			}
		}
		if (counter == n)
		{
			flag = true;
			break;
		}
		else
		{
			counter = 0;
		}
	}
	return flag;
}bool diagonal1Winner(char arr[][SIZE], int n, char symbol) {
	bool flag = false;
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i==j&&arr[i][j] == symbol)
			{
				counter++;
			}
		}
		if (counter == n)
		{
			flag = true;
			break;
		}
		
	}
	return flag;
}
bool diagonal2Winner(char arr[][SIZE], int n, char symbol) {
	bool flag = false;
	int counter = 0;
	int j;
	for (int i = 0; i <n; i++)
	{
		j= n - i - 1;
			if (arr[i][j] == symbol)
			{
				counter++;
			}
		
		if (counter == n)
		{
			flag = true;
			break;
		}

	}
	return flag;
}
void playing(char arr[][SIZE], int n,int choice) {
	int switcher,row,column;
	char symbol;
	bool isDraw = true;
	srand(time(NULL));
	for (int i = 0; i < n*n; i++)
	{
		if (i%2==0)
		{
			switcher = 1;
			symbol = 'X';
		}
		else
		{
			switcher = 2;
			symbol = 'O';
		}
		cout << "It's player "<<switcher<<"'s turn: " << endl;
		LOOP:if (choice==1)
		{
			cin >> row >> column;
		}
		else if (choice==2)
		{
			if (switcher==1)
			{
				cin >> row >> column;
			}
			else
			{
				
				row = rand() % n + 1;
				column = rand() % n + 1;
			}
		}
		else if (choice==3)
		{
			
			row = rand() % n + 1;
			column = rand() % n + 1;
			
		}
		if (row>0&&row<=n&&column>0&&column<=n&&arr[row-1][column-1]==' ')
		{
			arr[row - 1][column - 1] = symbol;
		}
		else
		{
			cout << "Invalid position. Please, try again." << endl;
			goto LOOP;
		}
		displayingTheBoard(arr, n);
		bool rowResult=rowWinner(arr, n, symbol);
		bool colResult=colWinner(arr, n, symbol);
		bool diagonal1Result=diagonal1Winner(arr, n, symbol);
		bool diagonal2Result=diagonal2Winner(arr, n, symbol);
		
		if (rowResult||colResult||diagonal1Result||diagonal2Result)
		{
			cout << "Player " << switcher << "won!" << endl;
			isDraw = false;
			break;
			
		}
	}
	if (isDraw)
	{
		cout << "The result is draw";
	}
}
int main()
{
	
	char arr[SIZE][SIZE];
	int choice;
	cout << "Choose game mode(1 - PvP, 2 - PvC, 3 - CvC) : ";
	do
	{
		cin >> choice;
	} while (choice<1||choice>3);
	cout << "Enter grid size: ";
	int n;
	do
	{
		cin >> n;
	} while (n < 3 || n>9);
	initializingTheBoard(arr, SIZE);
	displayingTheBoard(arr, n);
	playing(arr, n,choice);
	return 0;
}
