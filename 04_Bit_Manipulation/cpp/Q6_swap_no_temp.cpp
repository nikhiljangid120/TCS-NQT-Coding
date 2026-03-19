/*
 * Problem Name: Swap No Temp
 * 
 * Problem Description:
 * Write a C++ program to solve the "Swap No Temp" problem.
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin>>n;
    long long m;
    cin>>m;
    m^=n;
    n^=m;
    m^=n;
    cout<<n<<" "<<m<<"\n";
    return 0;
}