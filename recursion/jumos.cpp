#include<iostream>
using namespace std;

int numberOfJumps(int n){
    if(n<0)
    return 0;

    if(n==0)
    return 1;

        return numberOfJumps(n-1) +numberOfJumps(n-2)+numberOfJumps(n-3);
}

int main(){
    int n = 4;
    cout<<"Numbers of jumps "<<numberOfJumps(n);
}

