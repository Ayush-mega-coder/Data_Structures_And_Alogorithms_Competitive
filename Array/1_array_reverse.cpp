//1.reversing an array

#include<iostream>
using namespace std;

void reverseArray(int arr[], int start, int end){

    while(start<end){
        //swaping the values of start and end index using temp variable and incrementing start and decrementinf end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }


}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }


    //print original array
    cout<<"Original array is: "<<endl;
    printArray(arr,n);

    //function calling
    //taking start as 0 and end index as n-1
    reverseArray(arr, 0, n-1);

    cout<<"Reversed array is: "<<endl;

    //print reversed array
    printArray(arr,n);



}