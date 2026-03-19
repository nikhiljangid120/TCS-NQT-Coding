/*
 * Problem Name: Xor Unique
 * 
 * Problem Description:
 * Write a C++ program to solve the "Xor Unique" problem.
 */


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int xor_sum = 0;
    for(auto &x:arr) xor_sum^=x;
    cout<<xor_sum<<"\n";
    return 0;
}