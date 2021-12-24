#include <iostream>
using namespace std;

int toLetter(int n,string str[])
{
    if(n==0)
    return 0;

    toLetter(n/10,str);

    // 1st way
    // int number = n%10;
    // cout<<str[number]<<" ";
    
    cout<<str[n%10]<<" ";

}

int main()
{
    int n = 451;
    string str[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    toLetter(n,str);
}