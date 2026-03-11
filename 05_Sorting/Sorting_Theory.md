# 📚 SORTING — THEORY, TRICKS & TIPS
## TCS NQT 2026 Prep Guide

---

## 🔑 What TCS Actually Tests

TCS sorting questions are deceptively easy:
- **Sort by frequency** — most/least occurring element first
- **Sort 0s, 1s, 2s** — Dutch National Flag (1-pass)
- **Sort with custom rules** — sort by length, sort descending
- **Counting sort** — when values are in small range (0–100)
- **K-th largest/smallest** — sort then index, or partial sort

> 💡 In TCS, `std::sort` is your best friend. Know its 3 forms.

---

## 🧠 Core Concepts

### 1. std::sort (The Universal Sort)

```cpp
// Sort ascending (default)
sort(arr, arr + n);
sort(v.begin(), v.end());

// Sort descending
sort(arr, arr + n, greater<int>());
sort(v.begin(), v.end(), greater<int>());

// Sort with custom comparator
sort(v.begin(), v.end(), [](int a, int b) {
    return a < b;   // ascending
});
```

---

### 2. Bubble Sort (Know for TCS theory)

```cpp
for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
        if (arr[j] > arr[j + 1])
            swap(arr[j], arr[j + 1]);
    }
}
```
- Time: O(n²) | Space: O(1)
- Stable sort

---

### 3. Selection Sort

```cpp
for (int i = 0; i < n - 1; i++) {
    int minIdx = i;
    for (int j = i + 1; j < n; j++)
        if (arr[j] < arr[minIdx]) minIdx = j;
    swap(arr[i], arr[minIdx]);
}
```
- Time: O(n²) | Space: O(1)
- Not stable

---

### 4. Insertion Sort

```cpp
for (int i = 1; i < n; i++) {
    int key = arr[i], j = i - 1;
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;
}
```
- Time: O(n²) worst, O(n) best | Space: O(1)
- Stable sort. Best for nearly sorted arrays.

---

### 5. ⭐ Dutch National Flag — Sort 0s, 1s, 2s (Essential!)
Sort an array of only 0s, 1s, 2s in ONE pass — O(n), O(1) space.

```cpp
int low = 0, mid = 0, high = n - 1;
while (mid <= high) {
    if (arr[mid] == 0)      { swap(arr[low], arr[mid]); low++; mid++; }
    else if (arr[mid] == 1) { mid++; }
    else                    { swap(arr[mid], arr[high]); high--; }
}
```

> 🚨 **TCS Tip:** ANY time array has exactly 3 distinct values → Dutch National Flag.

---

### 6. Sort by Frequency (Most Frequent First)

```cpp
unordered_map<int, int> freq;
for (int x : arr) freq[x]++;

sort(arr.begin(), arr.end(), [&](int a, int b) {
    if (freq[a] != freq[b]) return freq[a] > freq[b]; // higher freq first
    return a < b;  // tie-break: smaller value first
});
```

---

### 7. Count Sort (When values are 0 to K)

```cpp
int k = 100;  // max value
vector<int> count(k + 1, 0);
for (int x : arr) count[x]++;
int idx = 0;
for (int i = 0; i <= k; i++)
    while (count[i]--) arr[idx++] = i;
```
- Time: O(n + k) | Space: O(k)
- Use when values are in small known range

---

### 8. Find K-th Largest Element

```cpp
// Method 1: Sort and index (simplest for TCS)
sort(arr.begin(), arr.end(), greater<int>());
cout << arr[k - 1];

// Method 2: nth_element (partial sort, O(n))
nth_element(arr.begin(), arr.begin() + k - 1, arr.end(), greater<int>());
cout << arr[k - 1];
```

---

### 9. Sort Strings (Alphabetically / by Length)

```cpp
vector<string> words = {"banana", "apple", "cherry"};

// Alphabetical (default)
sort(words.begin(), words.end());

// By length (shortest first)
sort(words.begin(), words.end(), [](string a, string b) {
    return a.length() < b.length();
});

// By length, then alphabetically
sort(words.begin(), words.end(), [](string a, string b) {
    if (a.length() != b.length()) return a.length() < b.length();
    return a < b;
});
```

---

### 10. Wave Sort (Alternating Peaks)
Arrange array so `arr[0] >= arr[1] <= arr[2] >= arr[3] ...`

```cpp
sort(arr, arr + n);
for (int i = 0; i < n - 1; i += 2)
    swap(arr[i], arr[i + 1]);
```

---

## ⚡ TCS-Specific Sorting Tricks

| Situation | Use |
|---|---|
| Just sort the array | std::sort |
| Sort only 0,1,2 | Dutch National Flag |
| Sort by frequency | map + custom comparator |
| Small value range (0–100) | Count sort |
| K-th largest/smallest | Sort + index |
| Sort strings by length | Custom lambda |
| Descending sort | greater<int>() |

---

## 📋 Sorting Algorithm Complexity

| Algorithm | Best | Average | Worst | Space | Stable |
|---|---|---|---|---|---|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) | ✅ Yes |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) | ❌ No |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) | ✅ Yes |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) | ✅ Yes |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) | ❌ No |
| Count Sort | O(n+k) | O(n+k) | O(n+k) | O(k) | ✅ Yes |
| std::sort | - | O(n log n) | O(n log n) | O(log n) | ❌ No |

---

## 🚨 Common Edge Cases

- Array of size 1 → already sorted
- All same elements → sort doesn't change anything
- Already sorted → Bubble/Insertion sort in O(n)
- Reverse sorted → worst case for Bubble sort
- k > n → invalid, check bounds

---

## 🎯 TCS NQT PYQ Patterns (Sorting)

1. **"Sort array of 0s, 1s, 2s in single pass"** → Dutch National Flag
2. **"Find K-th largest element"** → Sort descending, return arr[k-1]
3. **"Sort elements by their frequency"** → map + custom sort
4. **"Sort array in ascending/descending"** → std::sort
5. **"Sort array of strings alphabetically or by length"** → custom lambda
6. **"Arrange array in wave form"** → sort + swap alternates

---

> 💡 **Golden Rule:** In TCS exams, ALWAYS use `std::sort` unless problem specifically asks you to implement a sorting algorithm. It's O(n log n) and always correct. Only use Dutch National Flag when input is guaranteed to be only 0,1,2.
