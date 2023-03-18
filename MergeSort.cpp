#include<iostream>
using namespace std;

void merge(int arr[],int p,int q,int r){
    //create index for sub arrays
    int n1 = q-p+1;
    int n2 = r-q;

    //create temp array for the given index
    int l[n1],m[n2];

    //trace the values inside the temp arrays
    for (int i = 0; i < n1; i++)
    l[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    m[j] = arr[q + 1 + j];

    //mantain current index
    int i,j,k;
    i=0;
    j=0;
    k=p;
    //now keep putting elements back in array
    while (i < n1 && j < n2) {
    if (l[i] <= m[j]) {
      arr[k] = l[i];
      i++;
    } else {
      arr[k] = m[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = l[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = m[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}


// Print the array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

// Driver program
int main() {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  mergeSort(arr, 0, size - 1);

  cout << "Sorted array: \n";
  printArray(arr, size);
  return 0;
}