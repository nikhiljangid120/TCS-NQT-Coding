/*
 * Problem Name: Palindrome Number
 * 
 * Problem Description:
 * Write a C++ program to solve the "Palindrome Number" problem.
 */


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;
    string str = to_string(n);
    string st = str;
    reverse(st.begin(),st.end());
    if(str == st) cout<<"Palindrome";
    else cout<<"Not a Palindrome";
    return 0;
}