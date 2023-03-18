/*
Mantain 2 pointers i and j both will be searching an elemnt
i will be searching element more than pivot
j will be searching element less than pivot

Now after the partition is done we need to call quick sort for first half and the other half
*/

#include <iostream>
#include <algorithm>
using namespace std;

int partition(int arr[], int low, int high)
{
    /*mark the pivot element*/
    int pivot = arr[high];
    int i = (low - 1); // select the low pointer
    for (int j = low; j <= high; j++)
    {
        if (arr[i] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1); // index of the quciksort element
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}