#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Array Size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the Array Elements: ";
    for(auto &x:arr) cin>>x;
    int low = 0, mid = 0, high = n - 1;
    while(mid<=high){
        if(arr[mid]==0) swap(arr[low++],arr[mid++]);
        else if(arr[mid]==1) mid++;
        else swap(arr[mid],arr[high--]);
    }
    cout<<"New array elements are: ";
    for(auto &x:arr) cout<<x<<" ";
    return 0;
}