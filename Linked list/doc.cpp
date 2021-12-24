#include <iostream>
#include <vector>
#include <set>
using namespace std;

void solution(vector<int> &A, vector<int> &B, vector<int> &C, int S)
{
    bool flag = false;
    set<pair<int, int>> slots;
    int x = A.size();
    if (x > S)
        cout << "Impossible";
    for (int i = 1; i <= x; i++)
    {
        pair<int, int> current = make_pair(A[i], B[i]);
        pair<int, int> currRev = make_pair(B[i], A[i]);
        if (slots.find(current) == slots.end())
        {
            slots.insert(current);
            // cout<<i<<" ";
            C.push_back(i);
            continue;
        }
        else if (slots.find(currRev) == slots.end())
        {
            slots.insert(currRev);
            // C.push_back(i);
        }
        else
            cout << "Impossible";
    }
    // cout << "Impossible";
    // cout<<i;
}

int main()
{

    vector<int> A{1,1};
    vector<int> B{1,1};
    vector<int> C;
    int S = 3;
    solution(A, B, C, S);
    for (int x : C)
    {
        cout << x << " ";
    }

    // cout<<solution(A,B,S)<<" ";
}