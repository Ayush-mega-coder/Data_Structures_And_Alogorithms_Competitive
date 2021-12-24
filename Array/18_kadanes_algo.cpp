//KADANAE's ALOGRITHM - the simple idea of kadane's algo is to look for all positive contiguous segments of the array and replace the negative sum with zero.

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];

        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }
    cout << "Maximum Sum is " << maxSum;
}