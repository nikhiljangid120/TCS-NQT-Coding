/*
 * Problem Name: Prime Sieve
 * 
 * Problem Description:
 * Write a C++ program to solve the "Prime Sieve" problem.
 */


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin>>n;
    for(int i = 2;i<sqrt(n);i++){
        if(n%i == 0){
            cout<<"Not a Prime";
            return 0;
        }
    }
    cout<<"Prime";
    return 0;
}