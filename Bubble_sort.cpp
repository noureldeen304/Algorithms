#include<iostream>
using namespace std;
void swap(int arr[], int s, int e)
{
	int temp = arr[s];
	arr[s] = arr[e];
	arr[e] = temp;
}
void bubblesort(int arr[], int n)
{
	
	for(int i=1;i<n;i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(arr, j, j + 1);
			
		}
		
	}
}
void display(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}
int main()
{
	int arr[] = { 90,80,70,60,10,50,40,30,20 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "The elements:\n";
	display(arr, n);
	bubblesort(arr, n);
	cout << "\nThe elements after sorting:\n";
	display(arr, n);

	return 0;

}
