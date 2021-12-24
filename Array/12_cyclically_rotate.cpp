//Given an array, rotate the array by one position in clock-wise direction.

#include<iostream>
using namespace std;

void rotate(int a[], int n){
    int temp = 0;
    temp = a[n-1];

    for(int i=n-1;i>=0;i--){
        a[i] = a[i-1];
    }
    a[0] = temp;


}

void printArray(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int n = 5;
    int a[] = {1,2,3,4,5,6,5,3};

    rotate(a,n);
    printArray(a,n);

}