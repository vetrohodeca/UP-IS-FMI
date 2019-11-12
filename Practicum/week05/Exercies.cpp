#include<iostream>
#include<cmath>
#define MAXSIZE 9999
#define INTMAXSIZE 2147483647
using namespace std;
int main()
{
	//1 task
	/*int n;
	do
	{
		cin>>n;
	}
	while(n<100||n>99999);
	while(n>0)
	{
		int digit=n%10;
		cout<<digit;
		for(int i=0;i<digit;i++)
		{
			cout<<"*";
		}
		n=n/10;
		cout<<endl;

	}*/
	// 2 task
	/*int n;
	do
	{
		cin>>n;
	}
	while(n<1||n>100);
	for(int i=0;i<=n;i++)
	{
		for(int j=n;j>i;j--)
		{
			cout<<" ";
		}
		for(int j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<" | ";
		for(int j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}*/
	// arrays 1 task
	/*int arr[MAXSIZE];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int minValue=INTMAXSIZE;
	int maxValue=-INTMAXSIZE;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>maxValue)
		{
			maxValue=arr[i];
		}
		if(arr[i]<minValue)
		{
			minValue=arr[i];
		}
	}
	int secondMinValue=INTMAXSIZE;
	int secondMaxValue=-INTMAXSIZE;
		for(int i=0;i<n;i++)
	{
		if(arr[i]>secondMaxValue&&arr[i]!=maxValue)
		{
			secondMaxValue=arr[i];
		}
		if(arr[i]<secondMinValue&&arr[i]!=minValue)
		{
			secondMinValue=arr[i];
		}
	}
	cout<<minValue<<endl<<maxValue<<endl;
	cout<<secondMinValue<<endl<<secondMaxValue;
	*/
	//2 task
	/*int n;
	cin>>n;
	bool flag=true;
	int arr[MAXSIZE];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				flag=false;
			}
		}
	}
	cout<<boolalpha<<flag;
	*/
	//3 task
	/*int n;
	cin>>n;
	int k=0;
	int positions[MAXSIZE];
	int number;
	int counter=0;
	int arr[MAXSIZE];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>number;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==number)
		{
			counter++;
			positions[k]=i;
			k++;
		}
	}
	if(counter>0)
	{
		cout<<number<<" is present "<< counter<<" times in the array at positions:";
		for(int i=0;i<k;i++)
		{
			cout<<positions[i];
		}
	}
	else cout<<number<<" is present "<<counter<<" times in the array.";
	*/
	//4 task
	/*int arr[MAXSIZE];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	double sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	double average= (double)sum/n;
	int differnce=INTMAXSIZE;
	int closest;
	for(int i=0;i<n;i++)
	{
		if((double)abs(arr[i]-average)<=(double)differnce)
		{
			closest=arr[i];
			differnce=abs(closest-arr[i]);
		}
	}
	int arr2[MAXSIZE];
	int k,j=0;
	int arr3[MAXSIZE];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<closest)
		{
			arr2[k]=arr[i];
			k++;
		}
		else
		{
			arr3[j]=arr[i];
			j++;
		}
	}
	cout<<closest<<" , ";
	cout<<"[ ";
	for(int i=0;i<k;i++)
	{
		cout<<arr2[i]<<",";
	}
	cout<<"]";
	cout<<" [ ";
	for(int i=0;i<j;i++)
	{
		cout<<arr3[i]<<",";
	}
	cout<<"]";*/
	// 5 task
	/*int arr[MAXSIZE];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	bool isMirror=true;
	for(int i=0,j=n-1;i<n/2,j>n/2;i++,j--)
	{
		if(arr[i]!=arr[j])
		isMirror=false;
		break;
	}
	cout<<boolalpha<<isMirror<<endl;*/
	/*
	int n;
	cin >> n;
	int arr[100][100];
	int temp[1000];
	int tempIndex = 0;
	int f = 1;
	for (int j = 0; j < n * n; j++)
	{
		temp[tempIndex] = f;
		tempIndex++;
		f++;
	}
	int br = 0;

	for (int i = 0; i < tempIndex; i++)
	{
		cout << temp[i] << "  ";
	}
	tempIndex = 0;
	while (true)
	{
		for (int j = 0 + br; j < n - br; j++)
		{
			arr[br][j] = temp[tempIndex];
			tempIndex++;
		}
		for (int i = 1 + br; i < n - br; i++)
		{
			arr[i][n - 1 - br] = temp[tempIndex];
			tempIndex++;
		}
		for (int j = n - 2 - br; j >= + br; j--)
		{
			arr[n - 1 - br][j] = temp[tempIndex];
			tempIndex++;
		}
		for (int i = n - 2 - br; i > 0 + br; i--)
		{
			arr[i][0 + br] = temp[tempIndex];
			tempIndex++;
		}
		br++;
		if (br > n)
		{
			break;
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < 10)
				cout << arr[i][j] << "   ";
			else if (arr[i][j] < 100)
				cout << arr[i][j] << "  ";
			else
				cout<<arr[i][j] << " ";
		}
		cout << endl;
	}*/
	// bonus task 2
	int n;
	cin >> n;
	bool flag = true;
	int arr[MAXSIZE];
	int count = 1;
	int used[MAXSIZE];
	for (int i = 0; i < n; i++)
	{
		used[i] = 0;
	}
	for (int i = 0;  i< n;i ++)
	{
		cin >> arr[i];
	}
	cout << " -> ";
	for (int i = 0; i < n; i++)
	{
		if (used[i] == 0)
		{
			int count = 0;		
			for (int j = i; j < n; j++)
			{
				if (arr[j] == arr[i])
				{
					count += 1;
					used[j] = 1;
				}
			}
			cout << arr[i]<< "-" <<count<<"  ";
		}
	}

	
	return 0;
}
