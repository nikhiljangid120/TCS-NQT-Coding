/*
 * Problem Name: First Nonrepeating
 * 
 * Problem Description:
 * Write a C++ program to solve the "First Nonrepeating" problem.
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string s;
    getline(cin,s);
    
    unordered_set<char>st;
    for(auto &c:s) st.insert(c);
    for(auto&c:s){
        if(st.count(c)==1){
            cout<<c<<endl;
            return 0;
        }
    }
    cout<<"No nonrepeating character found"<<endl;
    return 0;
}
