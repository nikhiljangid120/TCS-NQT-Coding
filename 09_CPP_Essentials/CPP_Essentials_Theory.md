# 📚 C++ ESSENTIALS — THEORY, TRICKS & TIPS
## TCS NQT 2026 Prep Guide

---

## 🔑 What You Must Know for TCS

TCS uses C++ as the primary language for the coding round. You need:
1. The universal template (fast I/O + includes)
2. STL containers (vector, map, set, stack, queue)
3. String operations
4. Sort + custom comparators
5. Two-pointer and prefix sum templates

> 💡 You don't need advanced C++. Just master these 5 areas and you're set.

---

## 🧠 Core Concepts

### 1. ⭐ THE UNIVERSAL TEMPLATE (Start EVERY TCS Solution With This)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // your solution here
    
    return 0;
}
```

**Why:**
- `#include <bits/stdc++.h>` → includes EVERYTHING (vector, map, string, algorithm, etc.)
- `ios_base::sync_with_stdio(false); cin.tie(NULL);` → makes I/O ~5x faster

---

### 2. STL Vector (Dynamic Array)

```cpp
vector<int> v;              // empty vector
vector<int> v(n, 0);        // vector of n zeros
vector<int> v = {1, 2, 3};  // initialized

v.push_back(10);             // add element at end
v.pop_back();                // remove last element
v.size();                    // number of elements
v[i];                        // access i-th element
v.front();                   // first element
v.back();                    // last element
v.empty();                   // true if empty
v.clear();                   // remove all elements
sort(v.begin(), v.end());    // sort ascending
reverse(v.begin(), v.end()); // reverse
```

---

### 3. STL Map (Key → Value pairs, sorted by key)

```cpp
map<string, int> scores;
scores["Alice"] = 95;
scores["Bob"]   = 87;

// Access
scores["Alice"];         // 95
scores.count("Alice");   // 1 if key exists, 0 if not

// Iterate
for (auto& [key, val] : scores)
    cout << key << ": " << val << "\n";

// Check key existence
if (scores.find("Alice") != scores.end()) { /* exists */ }
```

**Use unordered_map for O(1) average (vs map's O(log n)):**
```cpp
unordered_map<string, int> freq;
freq["hello"]++;  // frequency counting
```

---

### 4. STL Set (Unique sorted elements)

```cpp
set<int> s;
s.insert(5);
s.insert(3);
s.insert(5);   // duplicate, ignored

s.count(5);    // 1 if exists, 0 if not
s.erase(5);    // remove 5
s.size();      // number of unique elements

for (int x : s) cout << x;  // prints in sorted order
```

---

### 5. STL Stack (LIFO)

```cpp
stack<int> st;
st.push(10);          // add
st.push(20);
st.top();             // peek: 20 (doesn't remove)
st.pop();             // remove top
st.empty();           // true if empty
st.size();            // number of elements
```

---

### 6. STL Queue (FIFO)

```cpp
queue<int> q;
q.push(10);           // add to back
q.push(20);
q.front();            // peek front: 10
q.back();             // peek back: 20
q.pop();              // remove front
q.empty();            // true if empty
q.size();             // number of elements
```

---

### 7. STL Sort with Custom Comparators

```cpp
// Ascending (default)
sort(v.begin(), v.end());

// Descending
sort(v.begin(), v.end(), greater<int>());

// Custom: sort by absolute value
sort(v.begin(), v.end(), [](int a, int b) {
    return abs(a) < abs(b);
});

// Sort pairs: by second value descending
vector<pair<int,int>> pairs;
sort(pairs.begin(), pairs.end(), [](auto& a, auto& b) {
    return a.second > b.second;
});
```

---

### 8. String Functions Reference

```cpp
string s = "Hello World";

s.length()              // 11
s.size()                // same as length
s.substr(0, 5)          // "Hello"
s.find("World")         // 6 (index where found)
s.find("xyz")           // string::npos (not found)
s.replace(6, 5, "TCS")  // "Hello TCS"
s += " 2026"            // concatenate
toupper(s[0])           // 'H' → 'H' (char)
tolower(s[0])           // 'H' → 'h' (char)
isalpha(c)              // true if letter
isdigit(c)              // true if digit
isspace(c)              // true if space
stoi("42")              // string → int = 42
stod("3.14")            // string → double = 3.14
to_string(42)           // int → string = "42"
```

---

### 9. ⭐ Two-Pointer Template

```cpp
// General two-pointer (both ends)
int l = 0, r = n - 1;
while (l < r) {
    // process arr[l] and arr[r]
    if (condition) l++;
    else           r--;
}

// Fast-slow pointer (same direction)
int slow = 0;
for (int fast = 0; fast < n; fast++) {
    if (arr[fast] != 0) {
        arr[slow++] = arr[fast];
    }
}
```

---

### 10. ⭐ Prefix Sum Template

```cpp
vector<int> prefix(n + 1, 0);
for (int i = 0; i < n; i++)
    prefix[i + 1] = prefix[i] + arr[i];

// Query: sum from index l to r (inclusive, 0-indexed)
int rangeSum = prefix[r + 1] - prefix[l];
```

---

## ⚡ The 10 C++ Tricks TCS Solutions Use

| Trick | Code |
|---|---|
| Max of two values | `max(a, b)` |
| Min of two values | `min(a, b)` |
| Absolute value | `abs(x)` |
| Swap two vars | `swap(a, b)` |
| GCD of two nums | `__gcd(a, b)` |
| Count set bits | `__builtin_popcount(n)` |
| Sort ascending | `sort(v.begin(), v.end())` |
| Sum of vector | `accumulate(v.begin(), v.end(), 0)` |
| Max in vector | `*max_element(v.begin(), v.end())` |
| Min in vector | `*min_element(v.begin(), v.end())` |

---

## 📋 Data Types & Ranges

| Type | Range | Use When |
|---|---|---|
| `int` | ±2.1 × 10⁹ | Default for most numbers |
| `long long` | ±9.2 × 10¹⁸ | Factorials, large products |
| `double` | ~15 digits | Decimals, fractions |
| `float` | ~7 digits | Avoid in TCS (precision issues) |
| `char` | -128 to 127 | Single character |
| `string` | dynamic | Text |
| `bool` | true/false | Flags |

---

## 🚨 Common C++ Mistakes in TCS

```cpp
// ❌ WRONG: Integer overflow
int a = 100000;
int b = 100000;
cout << a * b;       // OVERFLOW! a*b = 10^10 > INT_MAX

// ✅ CORRECT: Use long long
long long a = 100000LL;
cout << a * a;       // Fine

// ❌ WRONG: Using cin then getline
int n; cin >> n;
string s; getline(cin, s);  // reads the leftover '\n'!

// ✅ CORRECT: Add cin.ignore()
int n; cin >> n;
cin.ignore();
string s; getline(cin, s);

// ❌ WRONG: Comparing floats
if (0.1 + 0.2 == 0.3)  // This is FALSE due to floating point

// ✅ CORRECT: Use epsilon
if (abs((0.1 + 0.2) - 0.3) < 1e-9)  // True
```

---

## 🎯 TCS NQT PYQ: Common C++ Patterns

1. **Read N integers, find sum/max/min** → vector + accumulate/max_element
2. **Count frequency of each character** → unordered_map<char, int>
3. **Sort and find K-th largest** → sort + index from end
4. **Check if word was seen before** → set.count(word)
5. **Store key-value pairs (name → score)** → map<string, int>
6. **Process elements in LIFO order** → stack
7. **Process elements in FIFO order** → queue

---

## 📄 Input/Output Patterns in TCS

```cpp
// Read T test cases
int T; cin >> T;
while (T--) {
    // solve one test case
}

// Read array
int n; cin >> n;
vector<int> arr(n);
for (int i = 0; i < n; i++) cin >> arr[i];

// Read until EOF
int x;
while (cin >> x) { /* process */ }

// Read complete line
string line;
getline(cin, line);

// Formatted output (2 decimal places)
cout << fixed << setprecision(2) << value;
```

---

> 💡 **Golden Rule:** Start EVERY TCS solution with `#include<bits/stdc++.h>` and `ios_base::sync_with_stdio(false); cin.tie(NULL);`. Never forget this template — it saves time and prevents TLE (Time Limit Exceeded).
