// Write a function that reverses a string. The input string is given as an array of characters s.

#include <iostream>
#include <string>
using namespace std;

/*
//   1
void reverseStr(string str)
{
    for (int i = str.length() - 1; i >= 0; i--)
    {
        cout << str[i];
    }
}
*/

//2

void reverseStr(string& str)
{
    int n = str.length();

    //swap 
    for(int i = 0; i < n/2; i++)
    {
        swap(str[i],str[n-i-1]);
        
    }
}

int main()
{
    string str;
    str = "hello";
    reverseStr(str);
    cout<<str;
    return (0);
}