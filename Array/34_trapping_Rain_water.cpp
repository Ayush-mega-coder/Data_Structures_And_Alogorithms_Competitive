//Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 

#include<iostream>
#include<climits>
using namespace std;


int rainWater(int a[],int n){
    // int n = a.length;
    int left[n];
    left[0] = a[0];
    for(int i=1;i<n;i++){
        left[i] = max(left[i-1],a[i]);
    }

    int right[n];
    right[n-1] = a[n-1];
    for(int i=n-2;i>=0;i--){
        right[i] =max(right[i+1],a[i]);

    }
    int ans =0 ;
    for(int i= 0; i < n; i++){
        ans+=(min(left[i],right[i])- a[i]);

    }
    return ans;


}

int main(){
    int a[] ={7,4,0,9};
    int n = sizeof(a) / sizeof(a[0]);

    // int answ = rainWater(a);
    cout<<rainWater(a,n);



}