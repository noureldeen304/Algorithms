#include<iostream>
#include<vector>
using namespace std;
void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
int parent(int index)
{
    return (index / 2);
}
int left(int index)
{
    return (2 *index) +1;
}
int right(int index)
{
    return (2 * index) + 2;
}
void max_heapify(int a[],int index,int size)
{   
    if (index == size)
        return;
    int largest = index;
    
    int l = left(index);
    
    int r = right(index);
    if (l<size && l>0)
    {
        if (a[l] > a[largest])
        {
            largest = l;
        }        
    }       
    if (r<size && r>0)
    {
        if(a[r] > a[largest])
            largest = r;        
    }    
    if (largest != index)
    {
        swap(a, largest, index);       
        max_heapify(a, largest,size);
    }    
    
}
void build_max_heap(int a[], int size)
{
     
    for (int i = (size/2)-1; i >= 0; i--)
    {
        max_heapify(a, i ,size);
    }
    cout << "\n";
}
void heapsort(int a[], int size)
{
    build_max_heap(a, size);
    
    for (int i = size - 1; i >= 2; i--)
    {
        swap(a, 0, i);
        max_heapify(a, 0, i - 1);
    }
}
int main()
{
    int arr[] = { 64,81,72,12,99,7,21 };
    int n = sizeof(arr) / sizeof(int);
    cout << "The elemnts:\n";
    copy(arr, arr+n, ostream_iterator<int>(cout, " "));
    cout << "\n";
    heapsort(arr, n);
    cout << "The element after sorting:\n";
    copy(arr, arr+n , ostream_iterator<int>(cout, " "));
    cout << "\n\n";
    
    return 0;
}

