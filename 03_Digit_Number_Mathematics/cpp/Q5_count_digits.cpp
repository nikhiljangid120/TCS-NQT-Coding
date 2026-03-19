/*
 * Problem Name: Count Digits
 * 
 * Problem Description:
 * Write a C++ program to solve the "Count Digits" problem.
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin>>n;
    if(n<0) n = -n;
    int count = 0;
    while(n>0){
        n/=10;
        count++;
    }
    cout<<count;
    return 0;
}
