#include<iostream>
#include<unordered_map>
#include<vector>
#include<stdio.h>
using namespace std;

/*

// int commonElements(int n1,int n2,int n3,int a[],int b[],int c[]){

// }

int main(){
    int n1 = 6;
    int n2 = 6;
    int n3 = 8;

    int a[] = {1,5,10,20,40,80};
    int b[] = {6,7,20,80,100,100};
    int c[] = {3,4,15,20,30,70,80,120};

    // commonElements(n1,n2,n3,a,b,c);
    unordered_map<int,int> m1,m2,m3;
    for(int i=0;i<n1;i++)
    m1[a[i]]++;
    
    for(int i=0;i<n2;i++)
    m2[b[i]]++;
    
    for(int i=0;i<n3;i++)
    m3[c[i]]++;

    vector<int> v;
    for(int i = 0; i < n1; i++){
        if(m1[a[i]] && m2[a[i]] && m3[a[i]]){
            v.push_back(a[i]);
            m1[a[i]] == 0;
        }
    }
    for(int i = 0; i < v.size(); i++)
    cout<<v[i]<<" ";
    return 0;
    



}
*/

vector<int> commonElements(int n1,int n2,int n3,int a[],int b[],int c[]){
    int i=0,j=0,k=0;
    vector<int> v;
    while(i<n1 && j<n2 && k<n3){
        if(a[i]==b[j] && b[j]==c[k]){
            v.push_back(a[i]);
            i++;j++;k++;
        }
        else if(a[i]<b[j]){
        i++;
        }
        else if(b[i]<c[k])
        j++;
        else k++;

        //if numbers are same,
        int xx = a[i-1];
        while(a[i]==xx) 
        i++;
        int yy = b[i-1];
        while(b[i]==yy)
        j++;
        int zz = c[i-1];
        while(c[i]==zz)
        k++;

    }
    if(v.size()==0) 
    return {-1};
    return v;


}

int main(){
    int n1 = 6;
    int n2 = 6;
    int n3 = 8;

    int a[] = {1,5,10,20,40,80};
    int b[] = {6,7,20,80,100,100};
    int c[] = {3,4,15,20,30,70,80,120};

    vector<int> ans = commonElements(n1,n2,n3,a,b,c);
    // cout<<ans<<endl;
    cout<<ans;


}
