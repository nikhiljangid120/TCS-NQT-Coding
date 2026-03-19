// Product of Digits (String or Number)

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    getline(cin,s);
    long long product = 1;
    for(char c:s){
        if(c>='0' && c<='9'){
            product *= (c - '0');
        }
        else if(c>='A' && c<='Z'){
            product *= (c - 'A' + 10);
        }
        else if(c>='a' && c<='z'){
            product *= (c - 'a' + 10);
        }
        else{
            product *= 1;
        }
    }
    cout<<"The product of the digits is: "<<product<<endl;
    return 0;
}