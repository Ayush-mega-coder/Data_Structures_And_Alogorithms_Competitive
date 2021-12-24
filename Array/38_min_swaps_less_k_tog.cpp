//Given an array of n positive integers and a number k. Find the minimum number of swaps required to bring all the numbers less than or equal to k together.

#include<iostream>
#include<climits>
using namespace std;

void swap(int a[],int n,int k){
    int good = 0;
    for(int i = 0; i < n; i++){
        if(a[i]<=k)
        good++;
    }
    int mi = INT_MAX;
    int bad = 0;
    for(int i = 0; i < good; i++){
        if(a[i]>k)
        bad++;

    }
    int i=0,j= good-1;
    while(j<n){
        mi = min(mi,bad);
        j++;
        if(j<n && a[j]>k)
        bad++;
        if(a[i]>k) 
        bad--;
        i++;
    }
    if(mi==INT_MAX)
    cout<<"0\n"<<endl;
    else
    cout<<mi<<endl;
}



int main(){
    int a[] = {2, 7, 9, 5, 8, 7, 4};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 3;
    swap(a,n,k);

    // printArray(a,n);


}