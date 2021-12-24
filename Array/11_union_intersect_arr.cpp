//Find the union and intersection of two sorted arrayas
//1. merge two arrays
//2. remove duplicates
//but the size remains same

#include <iostream>
using namespace std;


void remove(int arr[],int n)
{
    int i,j,k;
    for (i = 0; i < n; ++i)
        for (j = i + 1; j < n;)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < n - 1; ++k)
                    arr[k] = arr[k + 1];
                --n;
            }
            else
                ++j;
        }
    cout << "\n";
    for (i = 0; i < n; ++i)
        cout << arr[i] << " ";
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
int main()

{
    int i, n;
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr[n1 + n2];
    for (int i = 0; i < n1 + n2; i++)
    {
        if (i < n1)
        {
            arr[i] = arr1[i];
        }
        else
        {
            arr[i] = arr2[i - n1];
        }
    }

    remove(arr, n1 + n2);
    // cout<<sizeof(arr)/sizeof(arr[0]);

    // printArr(arr,n);
}