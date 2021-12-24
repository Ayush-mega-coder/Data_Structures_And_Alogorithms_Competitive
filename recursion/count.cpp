#include <iostream>
using namespace std;

int count(int n)
{

    //base case     
    if (n == 0)
        return 0;
    //recursive call
    //head recursion op- 1 2 3 4 5
    count(n - 1);
    cout << n << " ";

    //tail recursion op- 5 4 3 2 1
    // cout<<n<<" ";
    // count(n-1);
}

int main()
{
    int n = 5;
    count(n);
}