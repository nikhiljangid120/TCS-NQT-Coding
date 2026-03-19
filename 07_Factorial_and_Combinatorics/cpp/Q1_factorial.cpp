/*
 * Problem Name: Factorial
 * 
 * Problem Description:
 * Write a C++ program to solve the "Factorial" problem.
 */


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin>>n;
    long long fact = 1;
    for(long long i = 1; i <= n; i++){
        fact = fact * i;
    }
    cout<<fact<<endl;
}