# 📚 MODULAR / CYCLIC MATHEMATICS — THEORY, TRICKS & TIPS
## TCS NQT 2026 Prep Guide

---

## 🔑 What TCS Actually Tests

TCS wraps modular/cyclic problems in stories about:
- **"After N days, what day is it?"** → Days of week cycle (mod 7)
- **"Nth person in a circular arrangement"** → index mod size
- **"What time will the clock show after X hours?"** → mod 12 or 24
- **"What is remainder after N rotations?"** → mod cycle length
- **"Repeating pattern: find value at position N"** → N mod pattern_length

> 💡 Whenever you see cycles, repeating patterns, or "after N steps" → use modulo.

---

## 🧠 Core Concepts

### 1. ⭐ The Modulo Operator (%)

```cpp
int remainder = a % b;   // a mod b = remainder when a divided by b
```

**Key properties:**
- `(a + b) % m = ((a % m) + (b % m)) % m`
- `(a * b) % m = ((a % m) * (b % m)) % m`
- `(a - b) % m = ((a % m) - (b % m) + m) % m`  ← add m to avoid negative

---

### 2. Day of Week After N Days

```cpp
// Days: 0=Sun, 1=Mon, 2=Tue, 3=Wed, 4=Thu, 5=Fri, 6=Sat
string days[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
int today = 1;  // Monday
int n = 10;
int result = (today + n) % 7;
cout << days[result];
```

---

### 3. Circular Index (Access Element at Position N in a Cycle)

```cpp
// Array of size k, access "position" N (0-indexed)
int k = 5;
int pos = N % k;   // wraps around
cout << arr[pos];
```

**Example:** If fruits repeat: [Apple, Banana, Cherry], what is fruit at position 8?
- 8 % 3 = 2 → "Cherry"

---

### 4. Clock Problem (Hours)

```cpp
int current_hour = 9;
int hours_added = 15;
int result = (current_hour + hours_added) % 12;
if (result == 0) result = 12;   // 12-hour clock: 0 becomes 12
```

---

### 5. ⭐ Modular Exponentiation (Power with Modulo)
Compute `base^exp % mod` efficiently — avoids overflow.

```cpp
long long modPow(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = result * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return result;
}
```

---

### 6. Find Value at Step N in a Repeating Sequence

```cpp
// Sequence repeats with period P
// Value at 1-indexed position N:
int period = 4;
int pos = (N - 1) % period;   // convert to 0-indexed with mod
cout << sequence[pos];
```

---

### 7. Array Rotation Using Modulo

```cpp
// Effective rotation = k % n (avoids redundant full rotations)
k = k % n;
// Example: rotate right by k
// new index of element at i = (i + k) % n
vector<int> rotated(n);
for (int i = 0; i < n; i++)
    rotated[(i + k) % n] = arr[i];
```

---

### 8. Josephus Problem (Circular Elimination)
N people in circle, every K-th person eliminated. Who survives?

```cpp
int josephus(int n, int k) {
    int pos = 0;  // position of survivor (0-indexed)
    for (int i = 2; i <= n; i++)
        pos = (pos + k) % i;
    return pos + 1;  // convert to 1-indexed
}
```

---

### 9. Check Divisibility Rules (Fast)

```cpp
// Divisible by 2  → last digit even (n % 2 == 0)
// Divisible by 3  → sum of digits % 3 == 0
// Divisible by 4  → last two digits % 4 == 0
// Divisible by 5  → last digit is 0 or 5
// Divisible by 9  → sum of digits % 9 == 0
// Divisible by 10 → last digit is 0
```

---

### 10. Find Period / Cycle Length of a Sequence

```cpp
// Detect where a sequence starts repeating
for (int i = 0; i < n; i++) {
    for (int period = 1; period <= n / 2; period++) {
        if (i + period < n && arr[i] == arr[i + period]) {
            // possible period detected
        }
    }
}
```

---

## ⚡ TCS Story → Modular Formula Map

| TCS Story Says | Formula |
|---|---|
| "After N days, what day?" | (start_day + N) % 7 |
| "Clock: what time after X hours?" | (start + X) % 12 (or 24) |
| "Nth element of repeating pattern" | pattern[(N-1) % period] |
| "If array is circular, element at pos N" | arr[N % size] |
| "N rotations of array" | effective = N % size |
| "A^B mod M" | modPow(A, B, M) |
| "Person K in circle of N" | Josephus formula |

---

## 📋 Modular Arithmetic Properties

```
(a + b) % m  = ((a%m) + (b%m)) % m
(a - b) % m  = ((a%m) - (b%m) + m) % m    ← +m prevents negative
(a * b) % m  = ((a%m) * (b%m)) % m
(a^b) % m    = modPow(a, b, m)             ← use fast exponentiation
a % m == 0   → a is divisible by m
```

---

## 🚨 Common Edge Cases

- N = 0 → no rotation/displacement needed
- Negative modulo → add m: `(-3 % 7 + 7) % 7 = 4`
- Overflow → always use `long long` with large numbers before %
- Period = 0 → divide by zero error, always check

---

## 🎯 TCS NQT PYQ Patterns (Modular/Cyclic Math)

1. **"Today is Monday. What day after 100 days?"** → (1 + 100) % 7
2. **"Clock shows 9:00. What does it show after 50 hours?"** → (9 + 50) % 12
3. **"Pattern ABCABC... What is 50th character?"** → pattern[(50-1) % 3]
4. **"Array is circular. After k steps, where are you?"** → k % n
5. **"Compute 2^1000 mod 10^9+7"** → modPow(2, 1000, 1e9+7)
6. **"N people in circle, every 3rd leaves. Who survives?"** → Josephus

---

> 💡 **Golden Rule:** Whenever you see "cycle", "repeating", "after N steps", "circular", "what comes after" → write `% cycle_length` and you're halfway there.
