// Prefix Sum Array Technique - TCS NQT
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();
    
    // 1. Compute Prefix Sum Array
    // prefix[i] will store sum of elements from arr[0] to arr[i-1]
    vector<int> prefix(n + 1, 0);
    
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + arr[i];
    }
    
    cout << "Original Array: ";
    for(int x : arr) cout << x << " ";
    cout << endl;
    
    cout << "Prefix Sum Array: ";
    for(int x : prefix) cout << x << " ";
    cout << endl;
    
    // 2. Answer Range Queries in O(1) time
    // Query: Sum from index L to R (inclusive, 0-indexed)
    // Formula: sum(L, R) = prefix[R + 1] - prefix[L]
    
    int L = 1, R = 4; // Elements: 2, 3, 4, 5. Expected Sum: 14
    int rangeSum = prefix[R + 1] - prefix[L];
    
    cout << "\nSum of elements from index " << L << " to " << R << " is: " << rangeSum << endl;
    
    return 0;
}
