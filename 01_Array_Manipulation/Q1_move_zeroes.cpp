#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Array Size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the Array Elements: ";
    for(auto &x:arr) cin>>x;
    int j = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    cout<<"New array elements are: ";
    for(auto &x:arr) cout<<x<<" ";
    return 0;
}