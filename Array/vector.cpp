#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> g1;

    for(int i=0;i<=5;i++){
        g1.push_back(i);
    }
    cout<<"Output of begin and end: ";
    for(auto i=g1.begin(); i!=g1.end();++i)
        cout << *i <<" ";

  
    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";
    cout << "Size : " << g1.size();
    cout << "\nCapacity : " << g1.capacity()<<endl;
    // cout << "\nMax_Size : " << g1.max_size();

    g1.resize(4);
    cout<<g1.size();

}
