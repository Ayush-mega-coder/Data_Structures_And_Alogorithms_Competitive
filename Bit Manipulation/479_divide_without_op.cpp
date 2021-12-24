//Divide two integers without using multiplication, division and mod operator
//https://www.youtube.com/watch?v=bdxJHWIyyqI


#include<iostream>
using namespace std;

int divide(long long dividend, long long divisor){
    int sign = ((dividend<0)^(divisor<0)) ? -1 : 1;

    //remove sign of operands
    dividend = abs(dividend);
    divisor = abs(divisor);

    //intitalize the quotient
    long long quotient = 0, temp = 0;

    //check down from the highest bit and accumulate the tentative value for valid bit

    for(int i = 31; i>=0; --i){
        if(temp + (divisor<<i) <=dividend){
            temp += divisor <<i;
            quotient |= 1LL << i;
        }
    } 
    if(sign==-1) quotient = -quotient;
    return quotient;
}

int main(){
    int a = 10, b=3;
    cout<< divide(a,b) << "\n";

 
    return 0;
}