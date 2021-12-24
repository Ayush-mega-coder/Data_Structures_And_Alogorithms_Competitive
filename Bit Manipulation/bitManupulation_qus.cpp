//check if number is power of 2

#include<iostream>
using namespace std;

bool ispowerof2(int n){
    //if a number is power of 2 then it will have only one set bit and if we find the (n& n-1) then it will be always 0
    return (n && !(n & n-1));
}

//count the number of ones in binary representation
int numberofones(int n){
    int count = 0;
    while(n){
        n = n & n-1;
        count++;
    }
    return count;


}
int main(){
    // cout<<ispowerof2(3);
    cout<<numberofones(10);


    return 0;
}

