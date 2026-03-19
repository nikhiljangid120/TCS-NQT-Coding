/*
 * Problem Name: Odd Even
 * 
 * Problem Description:
 * Write a C++ program to solve the "Odd Even" problem.
 */


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin>>n;
    if(n&1) cout<<"Odd Number";
    else cout<<"Even Number";
    return 0;
}