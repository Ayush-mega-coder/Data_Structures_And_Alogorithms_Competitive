#include <iostream>
using namespace std;

/*
//brute force approach

int Count(int a[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == k)

                count++;
        }
    }
    return count;
}

int main()
{
    int n = 4;
    int k = 2;
    int a[] = {1, 1, 1, 1};

    int ans = Count(a, n, k);
    cout << ans << endl;
    // print(a,n);
    return 0;
}

*/

//o(n)
#include <unordered_map>

int Count(int a[], int n, int k)
{
    int count = 0;

    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x = k - a[i];
        //checking if x is present in map elements, if not then m[x] ==0, frequency of x is 0
        if (m[x] == 0)
        {
            m[a[i]]++;
        }
        else
        {
            //else count have the frequencies
            count += m[x];
            m[a[i]]++;
        }
    }
    return count;
}

int main()
{
    int n = 4;
    int k = 6;
    int a[] = {1, 5, 7, 1};

    int ans = Count(a, n, k);
    cout << ans << endl;
    // print(a,n);
    return 0;
}
