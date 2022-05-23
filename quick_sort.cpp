#include<iostream>
using namespace std;
void swap(int arr[], int a, int b)
{
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
int partition(int arr[], int s, int e)
{
	int piv = arr[e];
	int pindex = s;
	for (int i = s; i < e; i++)
	{ 
		if (arr[i] <= piv)
		{
			swap(arr, i, pindex);
			pindex++;
		}

	}
	swap(arr, e, pindex);
	return pindex;
}
void quicksort(int arr[], int s, int e)
{
	if (s < e)
	{
		int i = partition(arr, s, e);
		quicksort(arr, s, i - 1);
		quicksort(arr, i + 1, e);
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
	int arr[] = { 90,80,70,60,10,40,50,30,20 };
	int n = sizeof(arr) / sizeof(int);
	cout << "the elements:\n";
	display(arr, n);
	quicksort(arr, 0, n - 1);
	cout << "\nthe elements after sorting:\n";
	display(arr, n);



	system("pause");
	return 0;
}
