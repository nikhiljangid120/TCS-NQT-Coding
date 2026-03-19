/*
 * Problem Name: Longest Prefix
 * 
 * Problem Description:
 * Write a C++ program to solve the "Longest Prefix" problem.
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string s; getline(cin, s);
stringstream ss(s);
vector<string> strs;
string word;
while (ss >> word) strs.push_back(word);
if (strs.empty()) { cout << "" << endl; return 0; }
// Then compute prefix (e.g., vertical scan)
string prefix = strs[0];
for (size_t i = 1; i < strs.size(); ++i) {
    while (strs[i].find(prefix) != 0) {
        prefix.pop_back();
        if (prefix.empty()) break;
    }
}
cout << prefix << endl;

// I didn't understand this problem
    
}
