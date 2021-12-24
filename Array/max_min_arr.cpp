// Find the max and min in array

#include <iostream>
// #include <climits>
// #include <cmath>
using namespace std;



void printMax(int a[],int n){
    int max = a[0];
    for (int i = 0; i < n; i++)
    {

        if (max < a[i])
        {
            max = a[i];

        }
    }
    cout<<"max element is: "<<max<<endl;



}

void printMin(int a[],int n){
    int min = a[0];
    for (int i = 0; i < n; i++)
    {

        if (min > a[i])
        {
            min = a[i];

        }
    }
    cout<<"min element is: "<<min<<endl;


}



int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    printMax(a,n);
    printMin(a,n);
}

    // int mx = INT_MAX;
    // int mn = INT_MIN;

//     // int minimum, maximum;

//     for (int i = 0; i < n; i++)
//     {
//         int max = a[0];

//         if (max < a[i])
//         {
//             max = a[i];

//         }
//     }
//     cout << max;

// }
    