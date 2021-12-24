//Copy set bits in a range

#include <iostream>
using namespace std;

void copysetBits(unsigned &x, unsigned y, unsigned l, unsigned r)
{
    //if range is out of range then no change
    if (l<1 & r> 32)
        return;

    //traversing through the range using give l and r
    for (int i = l; i <= r; i++)
    {
        //left shifting the mask through (i-1), that is index of the set bit
        //check bit
        int mask = 1 << (i - 1);

        //if and of y and mask is not zero then there is a set bit so we change the set bit of x using y.
        if (y & mask)
            x = x | mask;
    }
}

int main()
{
    unsigned x = 10, y = 13, l = 1, r = 32;

    copysetBits(x, y, l, r);
    cout << "modified bits are: " << x;
    return 0;
}