# 📚 DIGIT / NUMBER MATHEMATICS — THEORY, TRICKS & TIPS
## TCS NQT 2026 Prep Guide

---

## 🔑 What TCS Actually Tests

TCS LOVES digit/number problems. They appear in EVERY exam:
- **Extract digits** from a number (reverse, sum, product)
- **Check properties** — Armstrong, Perfect, Palindrome, Prime
- **Number theory** — GCD, LCM, HCF, power, modular arithmetic
- **Count digits** — frequency of each digit, count of digits

> 💡 **Master the digit extraction loop → solve ALL digit problems.**

---

## 🧠 Core Concepts

### 1. ⭐ THE DIGIT EXTRACTION LOOP (Most Important)
Extract digits one by one from right to left.

```cpp
int n = 12345;
while (n > 0) {
    int digit = n % 10;   // get last digit
    n /= 10;              // remove last digit
    // process digit
}
```

**Use this to:** reverse a number, sum digits, check Armstrong, check palindrome number, count digits.

---

### 2. Reverse a Number

```cpp
int n, rev = 0;
cin >> n;
int temp = n;
while (temp > 0) {
    rev = rev * 10 + (temp % 10);
    temp /= 10;
}
cout << rev;
```

---

### 3. Sum of Digits

```cpp
int digitSum(int n) {
    int sum = 0;
    while (n > 0) { sum += n % 10; n /= 10; }
    return sum;
}
```

---

### 4. Count of Digits

```cpp
int countDigits(int n) {
    int count = 0;
    while (n > 0) { count++; n /= 10; }
    return count;
    // OR: return to_string(n).length();
}
```

---

### 5. Check Palindrome Number
A number is palindrome if it equals its reverse.

```cpp
bool isPalindromeNum(int n) {
    int rev = 0, temp = n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}
```

---

### 6. Check Armstrong Number
A number is Armstrong if sum of (each digit ^ number_of_digits) == number.
Example: 153 = 1³ + 5³ + 3³ = 153 ✅

```cpp
bool isArmstrong(int n) {
    int digits = to_string(n).length();
    int sum = 0, temp = n;
    while (temp > 0) {
        int d = temp % 10;
        sum += pow(d, digits);  // d raised to power = number of digits
        temp /= 10;
    }
    return sum == n;
}
```

---

### 7. Check Perfect Number
A number is perfect if sum of its proper divisors equals itself.
Example: 6 = 1+2+3 = 6 ✅

```cpp
bool isPerfect(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) sum += n / i;
        }
    }
    return sum == n && n != 1;
}
```

---

### 8. GCD (Euclidean Algorithm)

```cpp
int gcd(int a, int b) {
    while (b) { a = a % b; swap(a, b); }
    return a;
    // OR: return __gcd(a, b);  // STL built-in
}
```

### LCM formula:
```cpp
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;  // divide first to prevent overflow
}
```

---

### 9. Prime Check

```cpp
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)   // only check up to sqrt(n)
        if (n % i == 0) return false;
    return true;
}
```

> 🚨 **TCS Tip:** Check up to `sqrt(n)`, not n. This is O(√n) vs O(n).

---

### 10. Sieve of Eratosthenes (All primes up to N)

```cpp
vector<bool> sieve(int N) {
    vector<bool> isPrime(N + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= N; j += i)
                isPrime[j] = false;
        }
    }
    return isPrime;
}
```

---

### 11. Power (Fast Exponentiation)

```cpp
// Simple power (n is small in TCS)
long long power(long long base, int exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result *= base;
        base *= base;
        exp /= 2;
    }
    return result;
}
// OR use built-in: pow(base, exp) — returns double
```

---

### 12. Check Power of 2 (Bit trick)

```cpp
bool isPowerOf2(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}
```

---

### 13. Digit Frequency Counter

```cpp
int freq[10] = {0};
int temp = n;
while (temp > 0) {
    freq[temp % 10]++;
    temp /= 10;
}
for (int i = 0; i <= 9; i++)
    cout << "Digit " << i << " appears " << freq[i] << " times\n";
```

---

## ⚡ TCS-Specific Number Tricks

| TCS Problem Phrase | Use |
|---|---|
| "Sum/product/reverse of digits" | Digit extraction loop |
| "Is the number palindrome?" | Reverse number, compare |
| "Is it Armstrong?" | Sum of digits^n == n |
| "HCF / GCD of two numbers" | __gcd(a, b) |
| "LCM of two numbers" | (a / gcd) * b |
| "Check prime" | Loop till sqrt(n) |
| "All primes up to N" | Sieve |
| "Sum of series 1²+2²+..." | n*(n+1)*(2n+1)/6 |

---

## 📋 Must-Know Math Formulas

```
Sum of 1 to N          = N * (N + 1) / 2
Sum of squares 1²..N²  = N * (N+1) * (2N+1) / 6
Sum of cubes 1³..N³    = [N*(N+1)/2]²
Number of digits        = floor(log10(N)) + 1
Even check             = N % 2 == 0
Divisibility by 3      = sum of digits % 3 == 0
Divisibility by 9      = sum of digits % 9 == 0
```

---

## 🚨 Common Edge Cases

- n = 0 → zero has no digits in digit loop (loop won't execute); handle separately
- Negative numbers → take abs() before digit operations
- Overflow → use `long long` for large numbers
- `pow()` returns double → cast to int for exact comparison
- 1 is NOT a prime number

---

## 🎯 TCS NQT PYQ Patterns (Digit/Number Math)

1. **"Sum of digits of a number"** → digit extraction loop
2. **"Reverse the given number"** → build reverse with *10 + digit
3. **"Is it an Armstrong number?"** → sum of digit^n == n
4. **"Find GCD and LCM of two numbers"** → __gcd + formula
5. **"Check if number is prime"** → loop up to sqrt(n)
6. **"Count how many times digit k appears"** → freq array
7. **"Perfect number check"** → sum of divisors

---

> 💡 **Golden Rule:** Digit extraction loop is the single most useful tool. Every digit problem reduces to: `while(n > 0) { digit = n%10; n/=10; }`
