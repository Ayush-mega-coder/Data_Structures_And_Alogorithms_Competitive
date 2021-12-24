#include<iostream>
using namespace std;


int exp(int n){

    if(n==1)
    return 1;
    
    int smallPow = exp(n/2);
    if(n&1){
        return 2*smallPow*smallPow;
    }
    else
    return smallPow*smallPow;
}
int exptwo(int n){
    if(n==0)
    return 1;
    int ans = 2*exptwo(n-1);
    cout<<ans;
    return ans;
}

int main(){
    int n=6;
    cout<<exptwo(n);
} 