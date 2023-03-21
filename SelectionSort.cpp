/*
Find the smallest element and find swap it with the first element of the array
keep repeating the process once we get the normal array values
*/
#include<iostream>
using namespace std;

void selection(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;i<n;i++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
/*make a print function to print*/
int main(void){
    int arr[] = {1,10,2,9};
    int n = 4;
    selection(arr,n);
    return 0;
}