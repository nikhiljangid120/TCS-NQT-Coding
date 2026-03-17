/*
 * Problem Name: Sum Of Digits
 * 
 * Problem Description:
 * Write a C++ program to solve the "Sum Of Digits" problem.
 */


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    cout<<sum<<endl;
    return 0;
}