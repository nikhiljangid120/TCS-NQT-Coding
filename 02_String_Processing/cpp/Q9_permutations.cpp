/*
 * Problem Name: Permutations
 * 
 * Problem Description:
 * Write a C++ program to solve the "Permutations" problem.
 */


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    do{
        cout<<s<<" ";
    }while(next_permutation(s.begin(),s.end()));
    return 0;

}    