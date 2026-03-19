/*
 * Problem Name: Prime Sieve
 * 
 * Problem Description:
 * Write a C++ program to solve the "Prime Sieve" problem.
 */


#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void printPrimes(int n) {
    cout << "Prime numbers from 0 to " << n << " are: ";
    for (int i = 0; i <= n; i++) {
        if (isPrime(i)) cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    printPrimes(n);
    return 0;
}