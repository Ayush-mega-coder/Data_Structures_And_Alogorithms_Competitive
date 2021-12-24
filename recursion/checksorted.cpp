#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(vector<int> arr,int index){
    if(index>=arr.size())
    return true;

    if(arr[index]<arr[index-1])
    return false;

    return checkSorted(arr,index+1);

}

int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    bool answer = checkSorted(arr,1);
    cout<<answer;
}