#include<iostream>
#include <unordered_map>

using namespace std;
/*

int main(){
    unordered_map<string, int> umap;

    //inserting values 
    umap["Ayush"] = 10;
    umap["purohit"] = 20;
    umap["spunkey"] = 30;

    //traversing values
    for(auto x: umap){
        cout <<x.first<<" "<<x.second<<endl;
    }

    string key = "Ayush";
    if(umap.find(key) == umap.end())
    cout<<key<<" not found"<<endl;
    else
    cout<<"Found "<<key<<endl;

}
*/

//given a string of words find frequencies of individual words in

// input = "geeks for geeks geekc quiz practice qa for"

#include<sstream>

void printFreq(const string &str){
    //declaring map of <string,int> type,each word is mapped to its freq

    unordered_map<string, int> wordFreq;

    //breaking input into word using string stream
    stringstream ss(str);
    string word;
    while(ss >> word)
    wordFreq[word]++;

    //now iterating over word, freq pair and printing them in <,> format

    unordered_map<string, int>::iterator p;
    for(p = wordFreq.begin(); p!=wordFreq.end();p++)
    cout<<p->first<<" "<<p->second<<endl;


}


int main(){
    string str = "geeks for geeks geeks quiz practice";
    printFreq(str);
    return 0;
}