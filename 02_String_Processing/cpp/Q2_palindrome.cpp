/*
 * Problem Name: Palindrome
 * 
 * Problem Description:
 * Write a C++ program to solve the "Palindrome" problem.
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    getline(cin,s);
    string reversed = s;
    reverse(reversed.begin(),reversed.end());
    if(s==reversed) cout<<"Palindrome String!";
    else cout<<"Not a Palindrome String!";
    return 0;
}    