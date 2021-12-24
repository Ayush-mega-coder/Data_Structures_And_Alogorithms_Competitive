
#include<iostream>
using namespace std;

int rearrange(int arr[], int n){
    int i=0;int j=n-1;
    while(i<j){
        if(i<j){

        swap(arr[i], arr[j]);
        i=i+2;
        j=j-2;
        }
        if(i==j){
            arr[i] = arr[n];
        }
    }
    // while(i=j){
    //     arr[i] = arr[n+1];
    // }
  
}


void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {7,2,3,6,4,3,-9,-5,-3,-1,-4};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);
    printArray(arr, n);
    // alternate(arr, n);
    // printArray(arr,n);
}