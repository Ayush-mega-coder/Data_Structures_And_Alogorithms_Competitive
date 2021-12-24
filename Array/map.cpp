#include<iostream>
#include <iterator>
#include <map>

using namespace std;
int main(){
    //empty map container
    map<int,int> map1;

    //insert elements
    map1.insert(pair<int,int>(1,40));
    map1.insert(pair<int,int>(2,30));
    map1.insert(pair<int,int>(3,60));
    map1.insert(pair<int,int>(4,20));
    map1.insert(pair<int,int>(5,20));

    //printing map 
    map<int,int>::iterator itr;
    for(itr=map1.begin(); itr!=map1.end(); itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    cout<<endl;

    //assigning the elements form map1 to map2

    map<int,int> map2(map1.begin(),map1.end());

    //printing map2
    for(itr = map2.begin();itr!=map2.end();itr++){
        
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    cout<<endl;

    //remove all elements up to element with key=3 in map2
    map2.erase(map2.begin(), map2.find(4));
    for(itr = map2.begin();itr!=map2.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;

    }
    cout<<endl;

}