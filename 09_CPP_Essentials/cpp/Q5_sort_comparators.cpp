// Custom Sorting and Comparators - TCS NQT
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Custom Comparator: Sort descending
bool cmpDescending(int a, int b) {
    return a > b; 
}

// Custom Comparator for Pairs: Sort by second element ascending
bool cmpPairs(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    vector<int> v = {15, 2, 8, 22, 10};
    
    // 1. Default Sort (Ascending)
    sort(v.begin(), v.end());
    cout << "Ascending: ";
    for(int x : v) cout << x << " ";
    cout << endl;
    
    // 2. Sort Descending using greater<int>()
    sort(v.begin(), v.end(), greater<int>());
    cout << "Descending (greater): ";
    for(int x : v) cout << x << " ";
    cout << endl;
    
    // 3. Sort Descending using custom comparator
    sort(v.begin(), v.end(), cmpDescending);
    cout << "Descending (custom): ";
    for(int x : v) cout << x << " ";
    cout << endl;
    
    // 4. Sorting vectors of pairs
    vector<pair<int, int>> pairs = {{1, 50}, {2, 10}, {3, 30}};
    sort(pairs.begin(), pairs.end(), cmpPairs);
    
    cout << "Pairs sorted by second value: ";
    for(auto p : pairs) {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;
    
    return 0;
}
