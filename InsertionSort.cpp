#include<iostream>
using namespace std;

void insertionSort(int array[],int size){
    //first step is to create a loop
    //first step will be to make the first element as key
    
    for(int step=1;step<size;step++){
        int key=array[step];//we initialised an array
        int j = step-1;//becomes 0
        while(j>=0&&key<array[j])
        {
            array[j+1]=array[j];
            --j;
        }
        array[j+1]=key;//replace the values with key values
    }
}

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}
//worst case when we have to sort all the elements
//best case  when everything is sorted
//jumbled for average case

int main() {
  int data[] = {9, 5, 1, 4, 3};
  int size = sizeof(data) / sizeof(data[0]);
  insertionSort(data, size);
  cout << "Sorted array in ascending order:\n";
  printArray(data, size);
}