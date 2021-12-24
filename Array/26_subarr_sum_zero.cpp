//Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.
//https://www.youtube.com/watch?v=QtbFXZrEZYc


//                  Approach 1: Tc = O(n2), Sc = O(1)
/*
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 2, 0, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int f = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {

            sum += arr[j];
            if (sum == 0)
            {

                f = 1;
                break;
            }
        }
        if (f == 1)
            break;
    }

    if (f == 1)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
*/

//              Approach 2: Tc=O(n), Sc =O(n)


#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {4,2,-3,1,6};
    int n= sizeof(arr) / sizeof(arr[0]);

    int s=0;
    int f =0;

    unordered_map<int,int> m;
    for(int i=0; i < n; i++){
        s = s + arr[i];
        if(s==0 or m[s] or arr[i]==0){
            f =1;break;
        }
        else{
            m[s] = 1;

        }
    }
    if(f==1) cout<<"YES\n";
    else cout<<"NO\n";


}