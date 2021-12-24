#include <iostream>
using namespace std;

void reply(string str)
{
    if (str == "yes")
    {
        cout << "I Love you too"
             << " ";
    }
    else
    {
        for (int i = 0; i < 100; i++)
        {

            cout << "Fuck You\n";
        }
    }
}

void game(int a,int b,int c){
    cout<<"guess a number";
    cin>>a;

    cout<<"Subtract a numbeer";
    cin>>b;
    c = a-b;

    cout<<"Your number is: ";

    cout<<c;



}

int main()
{
    cout << "Do you love me?"
         << " ";
    string str;
    cin >> str;

    // reply(str); 
    int a,b,c;
    game(a,b,c);

    return 0;
}