
// C++ program to find intersection of
// two sorted arrays
#include <iostream>
using namespace std;
 
/* Function prints Intersection of arr1[] and arr2[]
m is the number of elements in arr1[]
n is the number of elements in arr2[] */
void printIntersection(int arr1[], int arr2[], int m, int n)
{
    int i=0;
    int j =0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j])
        i++;
        else if(arr1[i]>arr2[j])
        j++;
        else{

        cout<<arr1[i]<<" ";
        i++;
        j++;
        }

        


    }
   
}
 
/* Driver program to test above function */
int main()
{
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    // Function calling
    printIntersection(arr1, arr2, m, n);
 
    return 0;
}