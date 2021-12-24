//Given an array of N integers arr[] where each element represents the max number of steps that can be made forward from that element. Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.

#include <iostream>
using namespace std;

void minJumps(int a[], int n)
{
    //initialising num as addition of first element with first element , this will give the addition of that number with steps
    int num = a[0] + a[0];

    //count should be one but we know count++ will execute one more time so we are initializing count with 0
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        while (a[n-1] > num)
        {
            num += a[i];
            count++;
        }
    }
    cout << count;  
}

int main()
{
    int n = 11; 

    int a[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};

    minJumps(a, n);
}