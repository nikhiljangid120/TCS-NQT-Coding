/*
 * Problem Name: Reverse Words
 * 
 * Problem Description:
 * Write a C++ program to solve the "Reverse Words" problem.
 */


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    getline(cin,s);
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}