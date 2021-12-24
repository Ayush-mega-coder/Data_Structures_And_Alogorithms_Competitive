//Find the Kth max and min element of an array
//Given an array and a number k where k is smaller than the size of the array, we need to find the k'th smallest element in the given array.it is given that all array elements are distinct

#include <iostream>
using namespace std;

void Sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    cin >> key;

    printArray(arr, n);
    Sort(arr, n);
    printArray(arr, n);
    cout << arr[key - 1];
}