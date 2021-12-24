#include <iostream>
#include <algorithm>

using namespace std;

void intersection(int a1[], int a2[], int n1, int n2)
{
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (a1[i] > a2[j])
            j++;

        else if (a1[i] < a2[j])
            i++;

        else
            cout << a1[i] << " ";
        i++;
        j++;
    }
}

int main()
{
    int a1[] = {4, 9, 5};
    int a2[] = {9, 4, 9, 8, 4};

    int n1 = sizeof(a1) / sizeof(a1[0]);
    int n2 = sizeof(a2) / sizeof(a2[0]);
    sort(a1, a1 + n1);
    sort(a2, a2 + n2);

    intersection(a1, a2, n1, n2);
}