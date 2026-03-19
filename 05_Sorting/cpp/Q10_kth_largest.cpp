/*
 * Problem Name: Kth Largest
 * 
 * Problem Description:
 * Write a C++ program to solve the "Kth Largest" problem.
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
    long long k;
    cin>>k;
    // sort(arr.begin(),arr.end());
    // cout<<arr[n-k]<<"\n";
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i = 0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top()<<"\n";
    return 0;
}