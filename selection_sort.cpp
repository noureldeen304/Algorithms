#include<iostream>
using namespace std;
void swap(int arr[], int s,int e)
{
	int temp = arr[s];
	arr[s] = arr[e];
	arr[e] = temp;


}
int locofsmallest(int arr[],int s,int e)
{
	 
	int j = s; // declared j to put in it the intial value for each domain of indexes 
	//and compare it's value with other values   
	for(int i = s+1;i<=e;i++)
	{
		if (arr[i] < arr[j])
			j = i;
	}
	return j;

}
void selsort(int arr[],int n)
{
	
	for(int i = 0;i<n;i++)
	{
		int j = locofsmallest(arr, i, n - 1);
		swap(arr, i, j);
	}
}
void display(int arr[],int n )
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";


	}
	cout << "\n";
}
int main()
{
	int arr[] = { 60,40,90,10,20,70,80,30};
	int n = sizeof(arr) / sizeof(int);
	cout << "The elements:\n";
	display(arr, n);
	selsort(arr, n);
	cout << "\nThe elements after sorting:\n";
	display(arr, n);

	return 0;
}
