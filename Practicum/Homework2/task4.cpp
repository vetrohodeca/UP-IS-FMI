#include<iostream>
using namespace std;
int calculate(int row, int col) 
{
	if (col == 0 || col == row) 
  	{
    	return 1;
  	}
	else	
    {
    	return calculate(row - 1, col - 1) + calculate(row - 1, col);
    }
}
void draw(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			cout<<calculate(i,j)<<" ";
		}
		cout<<endl;
	}
	
}
int main()
{
	int n;
	cin>>n;
	draw(n);
	return 0;
}
