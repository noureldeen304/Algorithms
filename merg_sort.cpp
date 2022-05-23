#include<iostream>
using namespace std;
void combine(int arr[], int s, int m, int e)
{
	int* b = new int[e + 1];
	int k = s;
	while (k <= e)
	{
		b[k] = arr[k];
		k++;
	}
	int i = s;
	int j = m + 1;
	k = s;
	while (i <= m && j <= e)
	{
		if (b[i] < b[j])
		{
			arr[k] = b[i];
			i++;

		}

		else
		{
			arr[k] = b[j];
			j++;
		}
		k++;
	}

	while (i <= m)
	{
		arr[k] = b[i];
		i++;
		k++;
	}
	while (j <= e)
	{
		arr[k] = b[j];
		j++;
		k++;
	}
	delete[]b;
}
void mrgsort(int arr[], int s, int e)
{
	if (s < e)
	{
		int m = s + (e - s) / 2;
		mrgsort(arr, s, m);
		mrgsort(arr, m + 1, e);
		combine(arr, s, m, e);
	}
}
void mrgsort(int arr[], int n)
{
	mrgsort(arr, 0, n - 1);
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


	int arr[] = { 90,80,70,10,60,50,40,30,20 };
	int n = sizeof(arr) / sizeof(int);
	cout << "The elements:\n";
	display(arr, n);
	mrgsort(arr, n);
	cout << "\nThe elements after sorting:\n";
	display(arr, n);
	system("pause");
	return 0;
}