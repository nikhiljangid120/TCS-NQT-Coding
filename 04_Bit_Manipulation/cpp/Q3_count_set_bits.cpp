/*
 * Problem Name: Count Set Bits
 * 
 * Problem Description:
 * Write a C++ program to solve the "Count Set Bits" problem.
 */


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin>>n;
    int count = __builtin_popcount(n);
    cout<<count<<"\n";
    return 0;
}