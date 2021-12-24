//https://www.youtube.com/watch?v=QbDAWmuOn5Y&t=560s
//recursion + backtracking

#include<iostream>
#include<vector>
using namespace std;

void func(int ind, vector<int> &ds, int arr[], int n){
    if(ind==n){
        for(auto it: ds){
            cout<< it <<" ";
        }
        cout<< endl;
        return;
    }
    ds.push_back(arr[ind]);
    //pick
    func(ind+1,ds, arr, n);
    ds.pop_back();

    //not pick
    func(ind+1, ds, arr, n);

}

int main(){
    vector<int> ds;
    int arr[3] = {1,3,2};
    int ind = 0;
    int n = sizeof(arr)/sizeof(arr[0]);

    func(ind,ds,arr,n);


}