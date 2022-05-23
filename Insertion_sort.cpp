#include<iostream>
using namespace std;
void insertingsort(int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while( j >= 0 && arr[j] > key)
		{			
				arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
void insertionsort(int arr[],int n)
{
	for (int i = 1; i < n; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
void display(int arr[], int n)
{
	int i = 0;
	while (i < n)
	{
		cout << arr[i] << " ";
		i++;
	}
	cout << "\n";
}
int main()
{
	int arr[] = { 90,80,70,60,10,50,40,30,20 };
	int n = sizeof(arr) / sizeof(int);


	cout << "The elements:\n";
	display(arr, n);
	insertionsort(arr, n);
	cout << "\nThe elements after sorting:\n";
	display(arr, n);
	return 0;
}
