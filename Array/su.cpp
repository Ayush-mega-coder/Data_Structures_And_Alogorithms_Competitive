// #include<iostream>
// using namespace std;

// int main(){
//     int a = 22;
//     int sum = 0;

//     while(a>0){
//         int rem = a%10;
//         a = a/10;
//         sum += rem;

//     }
//         cout<<sum;

//     return 0;
// }

//tribinacci
// #include <iostream>
// using namespace std;

// int fib(int n)
// {
//     if (n == 0)
//         return 1;
//     if (n == 1 || n == 2)
//         return 1;
//     else
//         return (fib(n - 1) + fib(n - 2) + fib(n - 3));
// }

// int main()
// {
//     int n = 8;
//     for (int i = 0; i < n; i++)
//     {
//         cout << fib(i) << " ";
//     }
// }

//count

// #include <iostream>
// using namespace std;

// int main()
// {

//     int att = 4;
//     string names[] = {"a", "b", "c", "d"};
//     int form = 5;
//     string subm[] = {"e", "c", "d", "f", "b"};
//     int fake;

//     //fake count + real count = form submission
//     int count = 0;
//     for (int i = 0; i < form; i++)
//     {
//         for (int j = 0; j < form; j++)
//         {

//             if (subm[i] == names[j])
//             {
//                 count++;
//             }
//         }
//     }
//     // int i=0;int j=0;
//     // while(i<form || j<form){
//     //     if(subm[i]==names[i]){
//     //         count++;
//     //     }
//     // }
//     // cout<<count;
//     cout << "Real count is: \n"
//          << count;
//     cout << endl;
//     cout << "Fake count is: \n"
//          << form - count;
// }

//played twice

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 5;
//     int played[] = {1,2,3,3,5};
//     // bool flag = false;
//     int count=0;

//     for(int i=0;i<n;i++){
//         if(played[i] == played[i+1]){
//             cout<<played[i];
//             count++;
//         }
        

//     }
//     if(count==1)
//     cout<<"NULL";
        

// }

//mario

// #include<iostream>
// using namespace std;

// int main(){
//     string str = "gfgfgfgf";
//     int n = str.length();
//     int count = 0;
//     for(int i=0;i<n;i++){
//         if(str[i] == "h"){
//             count++;

//         }
//     }
//     cout<<"Appreances : " <<count;

// }