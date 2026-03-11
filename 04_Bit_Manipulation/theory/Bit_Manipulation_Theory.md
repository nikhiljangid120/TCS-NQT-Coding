# 📚 BIT MANIPULATION — THEORY, TRICKS & TIPS
## TCS NQT 2026 Prep Guide

---

## 🔑 What TCS Actually Tests

TCS has **1–2 bit manipulation questions per exam**. They look scary but only use 3 operations:
- **XOR (^)** — toggle bits, find missing number, find unique element
- **AND (&)** — check specific bits, mask, odd/even check
- **Left / Right Shift (<< / >>)** — multiply/divide by 2, check power of 2

> 💡 Learn these 3 → solve every TCS bit question.

---

## 🧠 Core Concepts

### 1. Bit Operations Cheat Sheet

```
a & b    → AND  (1 only if both 1)
a | b    → OR   (1 if either is 1)
a ^ b    → XOR  (1 if bits are DIFFERENT, 0 if SAME)
~a       → NOT  (flip all bits)
a << k   → left shift  = multiply by 2^k
a >> k   → right shift = divide by 2^k
```

---

### 2. Check if Number is Odd or Even (Using AND)

```cpp
if (n & 1) cout << "Odd";
else        cout << "Even";
// n & 1 checks the last bit — set = odd, clear = even
```

---

### 3. Find Single Non-Duplicate (XOR Trick)
In an array where every element appears twice except one → XOR all elements.

```cpp
int result = 0;
for (int x : arr) result ^= x;
// All pairs cancel out (a^a = 0), unique remains
cout << result;
```

**Why it works:** `a ^ a = 0` and `a ^ 0 = a`

---

### 4. Count Set Bits (Brian Kernighan's Trick)

```cpp
int countSetBits(int n) {
    int count = 0;
    while (n) {
        n &= (n - 1);   // removes the lowest set bit
        count++;
    }
    return count;
    // OR: __builtin_popcount(n)  ← STL built-in
}
```

---

### 5. Set, Clear, Toggle a Bit at Position k

```cpp
// Set bit k (make it 1):
n = n | (1 << k);

// Clear bit k (make it 0):
n = n & ~(1 << k);

// Toggle bit k (flip it):
n = n ^ (1 << k);

// Check if bit k is set:
bool isSet = (n >> k) & 1;
```

---

### 6. Find Missing Number Using XOR
Array has 1 to n with one missing → XOR all + XOR 1..n.

```cpp
int findMissing(vector<int>& arr, int n) {
    int xorAll = 0;
    for (int x : arr) xorAll ^= x;
    for (int i = 1; i <= n; i++) xorAll ^= i;
    return xorAll;
}
```

---

### 7. Swap Two Numbers Without Temp Variable (XOR)

```cpp
int a = 5, b = 10;
a = a ^ b;
b = a ^ b;   // b = original a
a = a ^ b;   // a = original b
```

---

### 8. Check if Number is Power of 2

```cpp
bool isPowerOf2(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}
// Powers of 2 have exactly ONE set bit
// n-1 flips all bits below that set bit → n & (n-1) == 0
```

---

### 9. Multiply and Divide by 2 Using Shifts

```cpp
int n = 8;
int doubled  = n << 1;    // 16  (multiply by 2)
int halved   = n >> 1;    // 4   (divide by 2)
int times4   = n << 2;    // 32  (multiply by 4 = 2²)
```

---

### 10. Find Two Non-Repeating Numbers in Array
All elements appear twice except two → XOR + separate into two groups.

```cpp
void findTwoUnique(vector<int>& arr) {
    int xorAll = 0;
    for (int x : arr) xorAll ^= x;     // xorAll = a ^ b

    // Find rightmost set bit (differs between a and b)
    int rightBit = xorAll & (-xorAll);

    int a = 0, b = 0;
    for (int x : arr) {
        if (x & rightBit) a ^= x;
        else               b ^= x;
    }
    cout << a << " " << b;
}
```

---

## ⚡ TCS-Specific Bit Tricks

| Situation | Trick |
|---|---|
| Odd/even check | n & 1 |
| One unique in array (rest appear 2x) | XOR all |
| Count set bits | __builtin_popcount(n) |
| Is power of 2? | n & (n-1) == 0 |
| Swap without temp | XOR a,b |
| Multiply by 2 | n << 1 |
| Divide by 2 | n >> 1 |
| Toggle specific bit k | n ^ (1 << k) |
| Missing number in 1..n | XOR 1..n with array |

---

## 📋 XOR Truth Table

| a | b | a ^ b |
|---|---|---|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 0 |

**Key XOR facts:**
- `a ^ a = 0` (same values cancel)
- `a ^ 0 = a` (XOR with 0 same)
- XOR is commutative: `a ^ b = b ^ a`
- XOR is associative: `(a^b)^c = a^(b^c)`

---

## 📋 Binary Representation Reference

| Decimal | Binary |
|---|---|
| 1 | 0001 |
| 2 | 0010 |
| 4 | 0100 |
| 8 | 1000 |
| 15 | 1111 |
| 16 | 10000 |

---

## 🚨 Common Edge Cases

- n = 0 → no set bits (popcount = 0)
- Negative numbers → be careful with signed bit
- Overflow → use `long long` and `1LL << k` when k ≥ 31

---

## 🎯 TCS NQT PYQ Patterns (Bit Manipulation)

1. **"Find the number that appears odd times"** → XOR all elements
2. **"Find missing number in array 1 to N"** → XOR 1..N ^ all elements
3. **"Check if number is odd or even"** → n & 1
4. **"Count number of 1s in binary representation"** → __builtin_popcount
5. **"Swap two numbers without using a third variable"** → XOR swap
6. **"Check if number is a power of 2"** → n & (n-1) == 0

---

> 💡 **Golden Rule:** Memorize XOR properties: `a^a=0`, `a^0=a`. These two facts solve 80% of TCS bit problems. Don't overthink bit problems — they're always simpler than they appear.
