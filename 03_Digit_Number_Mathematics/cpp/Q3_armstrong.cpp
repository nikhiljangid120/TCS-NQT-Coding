/*
 * Problem Name: Armstrong
 * 
 * Problem Description:
 * Write a C++ program to solve the "Armstrong" problem.
 */

#include <bits/stdc++.h>
using namespace std;

int countDigits(int num) {
    int cnt = 0;
    while (num > 0) {
        cnt++;
        num /= 10;
    }
    return cnt;
}

int power(int base, int exp) {
    int res = 1;
    for (int i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    if (n == 0) {  // Handle edge case
        cout << "Not Armstrong" << endl;
        return 0;
    }
    
    int temp = n;
    int digits = countDigits(n);
    int sum = 0;
    
    while (temp > 0) {
        int digit = temp % 10;
        sum += power(digit, digits);
        temp /= 10;
    }
    
    if (sum == n) {
        cout << "Armstrong" << endl;
    } else {
        cout << "Not Armstrong" << endl;
    }
    return 0;
}
