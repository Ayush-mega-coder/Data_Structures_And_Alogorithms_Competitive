#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int removeElement(vector <int> nums, int val){
    int i=0;
    int n=nums.size();

    for(int i=0; i<n;i++){
        if(nums[i]==val){
            nums[i] = nums[n-1];
            n--;
            i--;

        }
        
    }
    return n;


}
int main(){
    vector <int> nums = {3,2,2,3};
    int val = 3;    
    int n = nums.size();

    cout<<removeElement(nums,val);
    




}