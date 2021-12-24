#include <iostream>
using namespace std;

int fact(int n)
{
    //base call
    // if (n <= 1)
    //     return 1;

    // // recursive call
    // int factorial = fact(n - 1);

    // //formual
    // int ans = n * factorial;
    // return ans;
    int res=1;
    int i;
    for(i=2;i<=n;i++){
        res *= i;
    }
        return res;


}

int main()
{
    int n = 120;
    cout << fact(n);
}