#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vec1;
    int ele;
    for(int i=0;i<4;i++){
        cout<<"Enter an element to add to this vector";
        cin>>ele;
        vec1.push_back(ele); 
    }
    display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1,5,566);
    display(vec1);




}