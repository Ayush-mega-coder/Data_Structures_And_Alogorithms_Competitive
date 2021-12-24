//Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

//If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order)

class Solution {
public:
void nextPermutation(vector<int>& nums) {
        int size = nums.size();
        if(size==0 || size==1)return;
        
        for(int i=size-1;i>=1;i--){
            int k=0;
            if(nums[i-1]<nums[i]){
                for( k=size-1;k>i-1;k--){
                    if(nums[k]>nums[i-1])
                        break;
                }
                swap(nums[i-1], nums[k]);
                reverse(nums.begin()+i, nums.end());
                return;
            }
        }
        reverse(nums.begin(), nums.end());
    }
};
//     void nextPermutation(vector<int>& a) {
//         int idx = -1;
//         int n = a.size();
//         for(int i=n-1;i>0;i--){
//             if(a[i] >a[i-1]){
//                 idx = i;
//                 break;
//             }
//         }
//         if(idx == -1){
//             reverse(a.begin(),a.end());
            
//         }
//         else{
//             int prev = idx;
//             for(int i=idx+1;i<n;i++){
//                 if(a[i]>a[idx-1] and a[i]<=a[prev]){
                    
//                 }
//             }
//             swap(a[idx-1],a[prev]);
//             reverse(a.begin()+idx,a.end());
            
//         }
//     }
// };