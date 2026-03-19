/*
 * Problem Name: Anagram
 * 
 * Problem Description:
 * Write a C++ program to solve the "Anagram" problem.
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
    if(s.size()!=t.size()) return false;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<"Anagram String!";
    else cout<<"Not an Anagram String!";
    return 0;
}