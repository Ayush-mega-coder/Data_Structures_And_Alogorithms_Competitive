#include <iostream>
#include <string>
using namespace std;

// void palindrome(string str)
// {
//     int n = str.length();
//     int flag = 0;
//     for (int i = 0; i < n / 2; i++)
//     {
//         if (str[i] != str[n - i - 1])
//         {
//             // cout<<"palindrome"<<endl;
//             flag = 0;
//             break;
//         }
//         else
//         {
//             flag = 1;
//         }
//     }
//     if (n == 1)
//         flag = 1;
//     if (flag == 1)
//         cout << "palindrome";
//     else
//         cout << "not palindrome";
// }

// int main()
// {
//     string str = "abba";
//     palindrome(str);
// }

//2

int isPalindrome(string s)
{

    int i = 0, j = s.length() - 1;
    while (i < j)
    {
        if (s[i++] != s[j--])
            return 0;
    }
    return 1;
}

int main()
{
    string s = "abba";
    cout << isPalindrome(s);
}
