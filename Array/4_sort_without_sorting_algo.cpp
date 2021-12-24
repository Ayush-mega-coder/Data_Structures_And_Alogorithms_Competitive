//4. Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include <iostream>
using namespace std;

void sort(int arr[], int n)
{
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low], arr[mid]);
            low++;
            mid++;
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(arr[mid], arr[high]);
            high--;
            break;
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

    int arr[] = {2, 0, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);

    sort(arr, n);
    printArray(arr, n);
}
