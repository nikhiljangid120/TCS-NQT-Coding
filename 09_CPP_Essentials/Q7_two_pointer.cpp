// Two-Pointer Technique - TCS NQT
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Find pair with given sum in a sorted array
bool hasPairWithSum(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left < right) {
        int current_sum = arr[left] + arr[right];
        
        if (current_sum == target) {
            cout << "Pair found: " << arr[left] << " + " << arr[right] << " = " << target << endl;
            return true;
        } else if (current_sum < target) {
            left++; // Need larger sum
        } else {
            right--; // Need smaller sum
        }
    }
    cout << "No pair found for target " << target << endl;
    return false;
}

int main() {
    vector<int> arr = {2, 4, 6, 8, 10, 12, 14};
    int target = 18;
    
    cout << "Array: ";
    for(int x : arr) cout << x << " ";
    cout << "\nTarget: " << target << endl;
    
    hasPairWithSum(arr, target);
    
    return 0;
}
