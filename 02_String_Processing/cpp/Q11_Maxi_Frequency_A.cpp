// Find the maximum substring with the largest frequency of character 'a'

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    getline(cin,s);
    int max_len = 0;
    for(int i = 0;i<s.size();i++){
        int count = 0;
        while(s[i]=='a'){
            count++;
            i++;
        }
        max_len = max(max_len,count);
    }
    cout<<"The maximum frequency of a is: "<<max_len<<endl;
    return 0;
}