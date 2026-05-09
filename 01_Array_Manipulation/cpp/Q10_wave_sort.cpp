/*
 * Problem Name: Wave Sort
 * 
 * Problem Description:
 * Write a C++ program to solve the "Wave Sort" problem.
 */

#include <iostream>
#include <algorithm>
using namespace std;

// Function to rearrange array in wave form
void waveSort(int arr[], int n) {
    // Step 1: Sort the array
    sort(arr, arr + n);

    // Step 2: Swap adjacent elements to create wave
    for (int i = 0; i < n - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    waveSort(arr, n);

    cout << "Array in wave form: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
