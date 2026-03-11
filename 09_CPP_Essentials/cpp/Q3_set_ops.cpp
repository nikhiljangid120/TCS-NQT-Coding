// Set Operations - TCS NQT
#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main() {
    // --- 1. Ordered Set (Stores unique elements in sorted order) ---
    cout << "--- Ordered Set ---" << endl;
    set<int> s;
    
    // Insert elements
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(10); // Duplicate, will not be added
    
    cout << "Set elements: ";
    for (int x : s) {
        cout << x << " "; // Output: 5 10 20
    }
    cout << endl;
    
    // Check if element exists
    if (s.count(10)) {
        cout << "10 is present in the set." << endl;
    }
    
    // Erase element
    s.erase(5);
    cout << "After erasing 5, size is: " << s.size() << endl;
    
    // --- 2. Unordered Set (Faster O(1) time, checks for duplicates without sorting) ---
    cout << "\n--- Unordered Set ---" << endl;
    unordered_set<int> us;
    us.insert(3);
    us.insert(1);
    us.insert(3); // Ignored
    
    cout << "Unordered set elements: ";
    for (int x : us) {
        cout << x << " "; 
    }
    cout << endl;
    
    return 0;
}
