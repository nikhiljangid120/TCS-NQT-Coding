# 📚 FACTORIAL & COMBINATORICS — THEORY, TRICKS & TIPS
## TCS NQT 2026 Prep Guide

---

## 🔑 What TCS Actually Tests

TCS combinatorics problems come disguised as:
- **"How many ways to arrange N people?"** → N! (factorial)
- **"How many ways to choose K from N?"** → NCR (combination)
- **"Circular seating arrangements"** → (N-1)! formula
- **"Count ways to climb stairs"** → Fibonacci-like DP
- **"Trailing zeros in N!"** → count factors of 5

> 💡 Master factorial + NCR formula → solve every TCS combinatorics question.

---

## 🧠 Core Concepts

### 1. Factorial (N!)

```cpp
// Iterative (preferred in TCS)
long long factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++) fact *= i;
    return fact;
}

// Recursive
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
```

**Key values to remember:**
```
0! = 1
1! = 1
5! = 120
10! = 3628800
20! = 2432902008176640000  (use long long)
```

---

### 2. NCR — Combinations (Choose K from N)
"Number of ways to choose K items from N items (order doesn't matter)"

```
NCR = N! / (R! * (N-R)!)
```

```cpp
long long ncr(int n, int r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;
    r = min(r, n - r);  // optimize: NCR(n,r) == NCR(n,n-r)
    long long result = 1;
    for (int i = 0; i < r; i++) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}
```

---

### 3. NPR — Permutations (Arrange K from N)
"Number of ways to arrange K items from N items (order matters)"

```
NPR = N! / (N-R)!
```

```cpp
long long npr(int n, int r) {
    long long result = 1;
    for (int i = 0; i < r; i++)
        result *= (n - i);
    return result;
}
```

---

### 4. ⭐ Circular Arrangements
"N people seated around a circle (rotations count as same)"

```
Circular arrangements = (N-1)!
```

```cpp
long long circular = factorial(n - 1);
```

**If there are identical items**, divide by the factorial of their count.

---

### 5. Count Trailing Zeros in N!
Count factors of 5 (since 2×5=10, and there are always more 2s than 5s).

```cpp
int trailingZeros(int n) {
    int count = 0;
    while (n >= 5) {
        n /= 5;
        count += n;
    }
    return count;
}
// Example: 25! trailing zeros = 25/5 + 25/25 = 5 + 1 = 6
```

---

### 6. Pascal's Triangle (NCR values row by row)

```cpp
void pascalTriangle(int n) {
    vector<vector<int>> triangle(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        triangle[i][0] = 1;
        for (int j = 1; j <= i; j++)
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
            cout << triangle[i][j] << " ";
        cout << "\n";
    }
}
```

---

### 7. Count Ways to Climb Stairs (1 or 2 steps at a time)
This is Fibonacci!

```cpp
int climbStairs(int n) {
    if (n <= 2) return n;
    int a = 1, b = 2;
    for (int i = 3; i <= n; i++) {
        int c = a + b;
        a = b; b = c;
    }
    return b;
}
// Ways to reach step N = fib(N+1)
```

---

### 8. Derangements (No item in original position)
Number of permutations where no element appears in its original position.

```
D(n) = (n-1) * (D(n-1) + D(n-2))
D(1) = 0, D(2) = 1
```

```cpp
long long derangement(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    long long a = 0, b = 1;
    for (int i = 3; i <= n; i++) {
        long long c = (i - 1) * (a + b);
        a = b; b = c;
    }
    return b;
}
```

---

### 9. Power Set Count
Number of subsets of a set of N elements = 2^N.

```cpp
long long powerSetCount = 1LL << n;  // 2^n
// Including empty set
```

---

### 10. Binomial Coefficient using DP (Prevents Overflow)

```cpp
long long C[50][50];
void buildPascal(int n) {
    C[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        C[i][0] = 1;
        for (int j = 1; j <= i; j++)
            C[i][j] = C[i-1][j-1] + C[i-1][j];
    }
}
// Now C[n][r] = NCR(n, r)
```

---

## ⚡ TCS Combinatorics Cheat Sheet

| TCS Problem Phrase | Formula |
|---|---|
| "Arrange N people in a line" | N! |
| "Choose K items from N" | NCR(N,K) = N!/(K!(N-K)!) |
| "Arrange K items from N" | NPR(N,K) = N!/(N-K)! |
| "Arrange N people around circle" | (N-1)! |
| "Trailing zeros in N!" | Count 5s: N/5 + N/25 + N/125... |
| "Subsets of N elements" | 2^N |
| "Climb N stairs (1 or 2 steps)" | Fibonacci(N+1) |
| "Permutation with no fixed point" | Derangement formula |

---

## 📋 Special Values to Know

```
0! = 1
1! = 1
5! = 120
10! = 3,628,800
20! ≈ 2.4 × 10^18 (needs long long)

C(10,3) = 120
C(10,5) = 252
C(20,10) = 184,756
```

---

## 🚨 Common Edge Cases

- NCR(n, 0) = 1 (empty selection)
- NCR(n, n) = 1 (select all)
- NCR(n, r) = NCR(n, n-r) → use smaller r
- Overflow: for n > 20, factorials exceed long long → use modular arithmetic
- Circular arrangement of 1 person = 0! = 1 (only 1 way)
- D(0) = 1, D(1) = 0 by convention

---

## 🎯 TCS NQT PYQ Patterns (Factorial/Combinatorics)

1. **"How many ways to arrange N books on a shelf?"** → N!
2. **"Choose 3 team members from 10 candidates"** → C(10,3) = 120
3. **"Circular seating for 5 friends"** → (5-1)! = 24
4. **"Trailing zeros in 100!"** → 100/5 + 100/25 + 100/125 = 24
5. **"Count subsets of a set of 4 elements"** → 2^4 = 16
6. **"Ways to go from step 0 to step 10, taking 1 or 2 steps"** → Fibonacci

---

> 💡 **Golden Rule:** Always simplify NCR(n, r) by using r = min(r, n-r) to avoid large factorial calculations. And remember: circular arrangements = (n-1)!, not n!
