#include<iostream>

// CPP program for the above approach
// #include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
 
// Function to merge two arrays
void merge(int ar1[],int ar2[],int m,int n){
    int i=0,j=0,k=n-1;
    while()

}

 
// Driver Code
int main()
{
 
    int ar1[] = { 1, 5, 9, 10, 15, 20 };

    int ar2[] = { 2, 3, 8, 13 };
    int m = sizeof(ar1) / sizeof(ar1[0]);
    int n = sizeof(ar2) / sizeof(ar2[0]);
    merge(ar1, ar2, m, n);
 
    cout << "After Merging \nFirst Array: ";
    for (int i = 0; i < m; i++)
        cout << ar1[i] << " ";
    cout << "\nSecond Array: ";
    for (int i = 0; i < n; i++)
        cout << ar2[i] << " ";
    return 0;
}