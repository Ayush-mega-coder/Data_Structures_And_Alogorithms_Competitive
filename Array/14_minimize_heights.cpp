//Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer.
//Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void getMinDiff(int a[], int n, int k)
{
    sort(a, a + n);
    int mini = a[0] + k;
    int maxi = a[n - 1] - k;

    int diff = maxi - mini;

    cout << diff;
}

int main()
{
    int n = 5;
    int k = 3;
    int a[] = {9, 3, 12, 20, 16};

    getMinDiff(a, n, k);
}