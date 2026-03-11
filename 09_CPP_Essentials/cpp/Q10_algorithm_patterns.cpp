// Common Algorithm Patterns - TCS NQT
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // For accumulate
using namespace std;

int main() {
    vector<int> v = {4, 1, 7, 3, 9, 2, 4};
    int n = v.size();
    
    cout << "Original Array: ";
    for(int x : v) cout << x << " ";
    cout << "\n\n";
    
    // 1. Max and Min Element
    int max_val = *max_element(v.begin(), v.end());
    int min_val = *min_element(v.begin(), v.end());
    cout << "Max Element: " << max_val << ", Min Element: " << min_val << endl;
    
    // 2. Sum of all elements (accumulate)
    // Use 0LL for long long sum to avoid overflow
    int total_sum = accumulate(v.begin(), v.end(), 0);
    cout << "Total Sum: " << total_sum << endl;
    
    // 3. Count occurrences of an element
    int count_4 = count(v.begin(), v.end(), 4);
    cout << "Occurrences of 4: " << count_4 << endl;
    
    // 4. Binary Search (works only on sorted arrays)
    vector<int> sorted_v = v;
    sort(sorted_v.begin(), sorted_v.end()); // 1, 2, 3, 4, 4, 7, 9
    
    bool found = binary_search(sorted_v.begin(), sorted_v.end(), 7);
    cout << "Is 7 present (binary search)? " << (found ? "Yes" : "No") << endl;
    
    // 5. Next Permutation
    string s = "abc";
    cout << "\nPermutations of 'abc':\n";
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    
    return 0;
}
