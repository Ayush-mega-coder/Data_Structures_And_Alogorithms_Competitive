//Rearrange array in alternating positive & negative items with O(1) extra space | Set 1
// space=o(1)time =o(n)




#include <iostream>

using namespace std;
void alternate(int arr[], int n)
{
    // rearrange(arr,n);
    int i = 0;
    int j = n - 1;
    while (i < j)
    {

        swap(arr[i], arr[j]);
        i = i + 2;
        j = j - 2;
    }
}

void rearrange(int arr[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {

        if (arr[i] > 0)
        {
            i++;
        }
        else if (arr[j] < 0)
        {
            j--;
        }
        else if (arr[i] < 0 && arr[j] > 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else
        {
        }
    }
    alternate(arr, n);
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
    int arr[] = {-1, 2, 3, -3, 4, -9, 3, -5, 6, 7, -4, -2};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);
    printArray(arr, n);
}