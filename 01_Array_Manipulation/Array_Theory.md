# 📚 ARRAY MANIPULATION — THEORY, TRICKS & TIPS
## TCS NQT 2026 Prep Guide

---

## 🔑 What TCS Actually Tests

TCS wraps array problems in stories about:
- **"packets", "boxes", "items", "vehicles", "students"** → always an array underneath
- Strip the story → identify: rearrange / search / sum / sort / two-pointer

---

## 🧠 Core Concepts

### 1. Two-Pointer Technique
Two pointers (left + right OR slow + fast) scanning from both ends.

```cpp
int l = 0, r = n - 1;
while (l < r) {
    // process arr[l] and arr[r]
    l++;
    r--;
}
```

**When to use:**
- Move zeroes / negatives to one side
- Reverse an array
- Check if sorted pair/target exists
- Rearrange positive/negative

---

### 2. Prefix Sum
Pre-compute cumulative sums to answer range-sum queries in O(1).

```cpp
vector<int> prefix(n + 1, 0);
for (int i = 0; i < n; i++)
    prefix[i + 1] = prefix[i] + arr[i];
// Sum from index l to r:
int sum = prefix[r + 1] - prefix[l];
```

**When to use:**
- "Sum of subarray from i to j"
- "Find subarray with given sum"

---

### 3. Kadane's Algorithm — Maximum Subarray Sum
Find the contiguous subarray with the largest sum in O(n).

```cpp
int maxSum = arr[0], curr = arr[0];
for (int i = 1; i < n; i++) {
    curr = max(arr[i], curr + arr[i]);
    maxSum = max(maxSum, curr);
}
```

**TCS Tip:** If all numbers are negative, it returns the largest negative.

---

### 4. Dutch National Flag (0s, 1s, 2s Sort)
Sort an array containing only 0, 1, 2 in ONE pass — O(n), O(1) space.

```cpp
int low = 0, mid = 0, high = n - 1;
while (mid <= high) {
    if (arr[mid] == 0)      swap(arr[low++], arr[mid++]);
    else if (arr[mid] == 1) mid++;
    else                    swap(arr[mid], arr[high--]);
}
```

**TCS Tip:** If an array has exactly 3 types of values → Dutch National Flag.

---

### 5. Sliding Window (Fixed & Variable)
Used when you need to process a contiguous block of k elements.

```cpp
// Fixed window of size k
int windowSum = 0;
for (int i = 0; i < k; i++) windowSum += arr[i];
int maxSum = windowSum;
for (int i = k; i < n; i++) {
    windowSum += arr[i] - arr[i - k];
    maxSum = max(maxSum, windowSum);
}
```

---

### 6. Array Rotation
Rotate array right by k steps using reversal trick — O(n).

```cpp
k = k % n;
reverse(arr, arr + n - k);       // reverse first part
reverse(arr + n - k, arr + n);   // reverse second part
reverse(arr, arr + n);           // reverse whole
```

---

### 7. Move Zeroes to End
Keep relative order of non-zero elements intact.

```cpp
int pos = 0;
for (int i = 0; i < n; i++)
    if (arr[i] != 0) arr[pos++] = arr[i];
while (pos < n) arr[pos++] = 0;
```

---

### 8. Second Largest Element
```cpp
int first = INT_MIN, second = INT_MIN;
for (int x : arr) {
    if (x > first) { second = first; first = x; }
    else if (x > second && x != first) second = x;
}
```

---

### 9. Frequency Counting using unordered_map
```cpp
unordered_map<int, int> freq;
for (int x : arr) freq[x]++;
// freq[x] = number of times x appears
```

---

### 10. Leaders in Array
An element is a leader if it is greater than all elements to its right.

```cpp
int maxRight = arr[n - 1];
cout << arr[n - 1] << " ";
for (int i = n - 2; i >= 0; i--) {
    if (arr[i] > maxRight) {
        maxRight = arr[i];
        cout << arr[i] << " ";
    }
}
```

---

## ⚡ TCS-Specific Tricks

| Situation | Trick |
|---|---|
| Sort only 0,1,2 | Dutch National Flag (3-pointer) |
| Max sum subarray | Kadane's Algorithm |
| Rearrange +ve/-ve | Two-pointer from both ends |
| Rotate array | Reverse trick (3 reverses) |
| Range sum queries | Prefix Sum |
| Find duplicate | XOR all + XOR 1..n |
| Remove duplicates (sorted) | Two-pointer |
| K-th largest | Sort + pick, or min-heap |

---

## 🚨 Common Edge Cases in TCS

- Array of size 1 → most operations are trivially the single element
- All same elements → duplicates, frequency count
- Array with all negatives → Kadane still works
- k > n for rotation → use `k % n`
- Empty array (n=0) → always check before processing

---

## 📦 STL Helpers for Arrays

```cpp
#include <bits/stdc++.h>
using namespace std;

sort(arr, arr + n);                  // sort ascending
sort(arr, arr + n, greater<int>());  // sort descending
reverse(arr, arr + n);               // reverse
*max_element(arr, arr + n);          // max value
*min_element(arr, arr + n);          // min value
accumulate(arr, arr + n, 0);         // sum
```

---

## 📋 Time & Space Complexity Reference

| Algorithm | Time | Space |
|---|---|---|
| Linear scan | O(n) | O(1) |
| Two-pointer | O(n) | O(1) |
| Prefix sum | O(n) | O(n) |
| Kadane's | O(n) | O(1) |
| Dutch Flag | O(n) | O(1) |
| Binary search | O(log n) | O(1) |
| Frequency map | O(n) | O(n) |

---

## 🎯 TCS NQT PYQ Patterns (Arrays)

1. **"Arrange items so positives come before negatives"** → Two-pointer rearrange
2. **"Find maximum subarray sum of contiguous elements"** → Kadane's
3. **"Sort array of colored balls (0,1,2)"** → Dutch National Flag
4. **"Rotate array by k steps"** → Reversal trick
5. **"Move all zeroes to the end"** → Single-pass two-pointer
6. **"Find the second largest"** → Single-pass tracking
7. **"Sum of any subarray equals k"** → Prefix sum + hashmap

---

> 💡 **Golden Rule:** In TCS, n ≤ 100 in most problems. O(n²) brute force will pass if you can't think of the optimal solution. Always get the sample I/O working first.
