/*
 * Problem Name: Gcd Lcm
 * 
 * Problem Description:
 * Write a C++ program to solve the "Gcd Lcm" problem.
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;
    cin>>a>>b;

    int hcf = 0, lcm = 0;
    hcf = __gcd(a,b);
    lcm = (a/hcf)*b;
    cout<<hcf<<" "<<lcm<<endl;
    return 0;
}
