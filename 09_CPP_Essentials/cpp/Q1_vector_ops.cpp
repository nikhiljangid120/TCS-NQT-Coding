// Vector Operations - TCS NQT
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to print vector
void printVector(const vector<int>& v) {
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    // 1. Initialization
    vector<int> v = {10, 20, 30};
    
    // 2. Add elements
    v.push_back(40);
    v.push_back(50);
    
    cout << "Initial vector: ";
    printVector(v);
    
    // 3. Access elements
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;
    cout << "Element at index 2: " << v[2] << endl;
    
    // 4. Remove elements
    v.pop_back(); // Removes 50
    cout << "After pop_back: ";
    printVector(v);
    
    // 5. Size and Capacity
    cout << "Size: " << v.size() << endl;
    
    // 6. Sorting
    vector<int> v2 = {5, 2, 8, 1, 9};
    sort(v2.begin(), v2.end());
    cout << "Sorted v2: ";
    printVector(v2);
    
    // 7. Reversing
    reverse(v2.begin(), v2.end());
    cout << "Reversed v2: ";
    printVector(v2);
    
    return 0;
}
