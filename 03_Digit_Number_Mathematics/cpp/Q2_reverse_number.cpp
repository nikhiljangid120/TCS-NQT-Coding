/*
 * Problem Name: Reverse Number
 * 
 * Problem Description:
 * Write a C++ program to solve the "Reverse Number" problem.
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    string str = to_string(n);
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}
