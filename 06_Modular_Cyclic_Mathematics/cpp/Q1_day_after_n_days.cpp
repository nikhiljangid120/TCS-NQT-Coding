/*
 * Problem Name: Day After N Days
 * 
 * Problem Description:
 * Write a C++ program to solve the "Day After N Days" problem.
 */


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    // Array of days starting from Sunday (index 0)
    string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    // Starting point: if 1 is Monday, the logic is correct.
    // We use (today + n) % 7 to find the index of the future day.
    int today = 1; 
    int res = (today + n) % 7;

    // Handle negative n (if the problem allows looking into the past)
    if (res < 0) res += 7;

    cout << days[res] << endl;

    return 0;
}
