/*
 * Problem Name: Day After N Days
 * 
 * Problem Description:
 * Write a C++ program to solve the "Day After N Days" problem.
 */


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin>>n;
    string days[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int today = 1;
    int res = ((today+n)%7);
    cout<<days[res]<<endl;
    
}