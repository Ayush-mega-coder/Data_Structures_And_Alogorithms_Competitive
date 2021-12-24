//Chocolate Distribution Problem
//Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are M students, the task is to distribute chocolate packets among M students such that :
//1. Each student gets exactly one packet.
//2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long int ans = INT_MAX;
    // int mindiff;
    for(int i=0;i<=n-m;i++){
        ans = min(a[m+i-1] -a[i],ans);
        
        
    }
    return ans;
    
    }   
};

int main(){
    long long  n = 8;
    long long  m =5;
    vector<long long> a = {3, 4, 1, 9, 56, 7, 9, 12};
    Solution ob;
    cout<<ob.findMinDiff(a,n,m)<<endl;
}
