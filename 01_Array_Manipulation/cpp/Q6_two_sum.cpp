/*
 * Problem Name: Two Sum
 * 
 * Problem Description:
 * Write a C++ program to solve the "Two Sum" problem.
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Array Size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the Array Elements: ";
    for(auto &x:arr) cin>>x;
    int target;
    cout<<"Enter the Target Sum: ";
    cin>>target;
    // int i = 0, j = n-1;
    // while(i<j){
    //     int sum = arr[i] + arr[j];
    //     if(sum==target) cout<<"Pair Found: "<<arr[i]<<","<<arr[j]<<endl;
    //     if(sum>target) j--;
    //     else i++;
    // }
    unordered_map<int,int>mp;
    for(int i = 0;i<n;i++){
        int comp = target - arr[i];
        if(mp.find(comp)!=mp.end()){
            cout<<"Pair Found: "<<arr[i]<<" "<<comp<<endl;
            return 0;
        }
        mp[arr[i]] = i;
    }
    cout<<"Pair Not Found"<<endl;
    return 0;
}
