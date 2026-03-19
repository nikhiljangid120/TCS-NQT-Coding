/*
 * Problem Name: Power Of Two
 * 
 * Problem Description:
 * Write a C++ program to solve the "Power Of Two" problem.
 */


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin>>n;
    cout<<pow(2,n)<<"\n";
    return 0;
}