// Map & Unordered Map - TCS NQT
#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    // --- 1. Ordered Map (Stored in sorted order of keys) ---
    cout << "--- Ordered Map ---" << endl;
    map<string, int> ageMap;
    
    // Insert elements
    ageMap["Alice"] = 25;
    ageMap["Bob"] = 22;
    ageMap["Charlie"] = 30;
    
    // Traversal
    for (auto it : ageMap) {
        cout << it.first << " is " << it.second << " years old." << endl;
    }
    
    // Find element
    if (ageMap.find("Bob") != ageMap.end()) {
        cout << "Bob is found in map." << endl;
    }
    
    // --- 2. Unordered Map (Faster O(1) average time, no specific order) ---
    cout << "\n--- Unordered Map (Frequency Counting) ---" << endl;
    unordered_map<int, int> freq;
    int arr[] = {1, 2, 2, 3, 1, 4, 1, 2};
    
    for(int x : arr) {
        freq[x]++;
    }
    
    for (auto it : freq) {
        cout << "Number " << it.first << " appears " << it.second << " times." << endl;
    }
    
    return 0;
}
