# 🐍 PYTHON ESSENTIALS — THEORY, TRICKS & TIPS
## TCS NQT 2026 Prep Guide

---

## 🔑 What You Must Know for TCS

Python is incredibly powerful and concise for competitive programming. You need to master:
1. Fast I/O (`sys.stdin.read`)
2. List comprehensions and slicing
3. Dictionaries (`dict`, `Counter`, `defaultdict`)
4. Sets for unique elements
5. Built-in functions (`max`, `min`, `sum`, `sorted`)

---

## 🧠 Core Concepts

### 1. ⭐ THE UNIVERSAL TEMPLATE (Fast I/O)

For TCS, standard `input()` is usually fine, but `sys.stdin.read` is safely faster for large inputs.

```python
import sys

def solve():
    # Read all inputs from standard input
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    n = int(input_data[0])
    
    # your solution here

if __name__ == '__main__':
    solve()
```

---

### 2. Lists (Dynamic Array)

```python
# Initialization
lst = [10, 20, 30]
zeros = [0] * 5       # [0, 0, 0, 0, 0]

# Operations
lst.append(40)        # Add at end
lst.pop()             # Remove last
lst.insert(1, 15)     # Insert 15 at index 1
len(lst)              # Number of elements

# Slicing
lst[1:3]              # Elements from index 1 to 2
lst[::-1]             # Reverse the list

# List Comprehension
squares = [x**2 for x in range(5)] # [0, 1, 4, 9, 16]
```

---

### 3. Dictionaries (Hash Map)

Dictionaries are O(1) for lookups.

```python
d = {"Alice": 95, "Bob": 87}

d["Alice"]            # 95
d.get("Charlie", 0)   # 0 (fallback if key missing)
"Alice" in d          # True

# Iteration
for key, val in d.items():
    print(f"{key}: {val}")

# Frequency Counting (Using collections.Counter)
from collections import Counter
freq = Counter([1, 2, 2, 3, 1, 1])
# freq will be Counter({1: 3, 2: 2, 3: 1})
```

---

### 4. Sets (Unique elements)

Sets provide O(1) membership testing.

```python
s = set([1, 2, 2, 3]) # {1, 2, 3}

s.add(4)
s.remove(2)
3 in s                # True

# Set operations
s1 = {1, 2, 3}
s2 = {3, 4, 5}
s1.intersection(s2)   # {3}
s1.union(s2)          # {1, 2, 3, 4, 5}
```

---

### 5. Strings

Strings are immutable in Python.

```python
s = "Hello World"
len(s)                # 11
s[0:5]                # "Hello"
s.replace("World", "TCS") # "Hello TCS"
s.find("World")       # 6
s.split()             # ["Hello", "World"]
"".join(["A", "B"])   # "AB"
s.lower()             # "hello world"
s.upper()             # "HELLO WORLD"
```

---

### 6. Sorting

```python
arr = [5, 2, 8, 1, 9]

arr.sort()            # Sorts in-place ascending
arr.sort(reverse=True)# Sorts in-place descending

# Return new sorted list (leaves original unchanged)
new_arr = sorted(arr)

# Custom sort: Sort by absolute value
arr2 = [-5, 2, 8, -1, 9]
arr2.sort(key=abs)
```

---

## ⚡ Python Tricks for TCS Solutions

| Trick | Code |
|---|---|
| Max/Min of list | `max(lst)`, `min(lst)` |
| Sum of list | `sum(lst)` |
| Absolute value | `abs(x)` |
| String to Int | `int(str)` |
| Reverse list/string | `lst[::-1]`, `s[::-1]` |
| Ascii to Char | `chr(65)` -> 'A' |
| Char to Ascii | `ord('A')` -> 65 |
| Swap variables | `a, b = b, a` |

---

## 🚨 Common Python Mistakes in TCS

```python
# ❌ WRONG: Modifying list while iterating
for x in lst:
    if x == 2: lst.remove(x)

# ✅ CORRECT: Iterate over copy
for x in lst[:]:
    if x == 2: lst.remove(x)

# ❌ WRONG: String concatenation in loop (slow)
s = ""
for x in lst: s += str(x)

# ✅ CORRECT: String join (fast)
s = "".join(map(str, lst))
```

> 💡 **Golden Rule:** Python is incredibly fast to write but natively slower than C++/Java. Always use built-in functions (`max`, `min`, `sum`, `map`) instead of writing loops, as the built-ins are implemented in C and run much faster!
