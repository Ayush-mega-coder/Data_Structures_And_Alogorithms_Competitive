//Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.


/* method 1

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


class Solution{
    public:
        vector<vector<int>> merge(vector<vector<int>>& intervals){
            vector<vector<int>> mergedIntervals;

            if(intervals.size()== 0){
                return mergedIntervals;
            }

            sort(intervals.begin(), intervals.end());
            vector<int> tempInterval = intervals[0];

            for(auto it: intervals){
                if(it[0]<= tempInterval[1]){
                    tempInterval[1] = max(it[1], tempInterval[1]);
                }
                else{
                    mergedIntervals.push_back(tempInterval);
                    tempInterval = it;
                }
            }
            mergedIntervals.push_back(tempInterval);
            return mergedIntervals;


        }
};
*/


// C++ program to merge overlapping Intervals in
// O(n Log n) time and O(1) extra space.
#include<bits/stdc++.h>
using namespace std;
 
// An Interval
struct Interval
{
    int s, e;
};
 
// Function used in sort
bool mycomp(Interval a, Interval b)
{ return a.s < b.s; }
 
void mergeIntervals(Interval arr[], int n)
{
    // Sort Intervals in increasing order of
    // start time
    sort(arr, arr+n, mycomp);
 
    int index = 0; // Stores index of last element
    // in output array (modified arr[])
 
    // Traverse all input Intervals
    for (int i=1; i<n; i++)
    {
        // If this is not first Interval and overlaps
        // with the previous one
        if (arr[index].e >=  arr[i].s)
        {
               // Merge previous and current Intervals
            arr[index].e = max(arr[index].e, arr[i].e);
            arr[index].s = min(arr[index].s, arr[i].s);
        }
        else {
            index++;
            arr[index] = arr[i];
        }   
    }
 
    // Now arr[0..index-1] stores the merged Intervals
    cout << "\n The Merged Intervals are: ";
    for (int i = 0; i <= index; i++)
        cout << "[" << arr[i].s << ", " << arr[i].e << "] ";
}
 
// Driver program
int main()
{
    Interval arr[] = { {6,8}, {1,9}, {2,4}, {4,7} };
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeIntervals(arr, n);
    return 0;
}