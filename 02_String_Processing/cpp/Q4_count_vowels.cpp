/*
 * Problem Name: Count Vowels
 * 
 * Problem Description:
 * Write a C++ program to solve the "Count Vowels" problem.
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    getline(cin,s);
    string str = "aeiouAEIOU";
    int count = 0;
    for(auto c:s){
        if(str.find(c)!=string::npos) count++;
    }
    cout<<count<<endl;
    return 0;
}
