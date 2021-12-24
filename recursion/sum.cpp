#include <iostream>
using namespace std;

int sum(int n)
{
    if(n==0)
    return 0;

    // int add = sum(n-1);
    int ans = n + sum(n-1);
    return ans;


}

int main()
{
    int n = 5;
    cout<<sum(n);
}