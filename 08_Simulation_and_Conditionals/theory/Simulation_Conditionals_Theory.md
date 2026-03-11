# 📚 SIMULATION & CONDITIONALS — THEORY, TRICKS & TIPS
## TCS NQT 2026 Prep Guide

---

## 🔑 What TCS Actually Tests

Simulation problems are the **most common TCS question type**. They look massive (200–300 words) but are just:
- Read the story carefully
- Identify: **who/what** is being tracked, **what conditions** apply, **what output** is needed
- Code it as: `if-else inside a loop`

> 💡 These look hardest but code in under 10 lines. Don't let the story intimidate you.

---

## 🧠 The 60-Second Story Reading Technique

**Step 1:** Find the input variables (N, K, amounts, etc.)
**Step 2:** Find the condition ("if salary > 50000", "if item == 'A'")
**Step 3:** Find what to compute/output
**Step 4:** Write: loop → condition → compute → output

**Template:**
```cpp
int n; cin >> n;
while (n--) {
    int value; cin >> value;
    if (value meets condition A) {
        // action A
    } else if (value meets condition B) {
        // action B
    } else {
        // default action
    }
}
```

---

## 🧠 Core Patterns

### 1. Simple Grade/Score Calculator

```cpp
int marks; cin >> marks;
string grade;
if (marks >= 90)      grade = "A";
else if (marks >= 75) grade = "B";
else if (marks >= 60) grade = "C";
else if (marks >= 40) grade = "D";
else                  grade = "F";
cout << grade;
```

---

### 2. Salary / Tax Calculator

```cpp
double salary; cin >> salary;
double tax = 0;
if (salary <= 300000)       tax = 0;
else if (salary <= 600000)  tax = (salary - 300000) * 0.05;
else if (salary <= 900000)  tax = 15000 + (salary - 600000) * 0.10;
else                        tax = 45000 + (salary - 900000) * 0.30;
cout << fixed << setprecision(2) << tax;
```

---

### 3. ATM / Vending Machine Simulation

```cpp
int amount; cin >> amount;
int notes[] = {2000, 500, 200, 100, 50, 20, 10};
for (int note : notes) {
    int count = amount / note;
    if (count > 0) cout << note << " x " << count << "\n";
    amount %= note;
}
```

---

### 4. Looping Simulation (Day/Round Based)

```cpp
int days; cin >> days;
int total = 0;
for (int day = 1; day <= days; day++) {
    int income; cin >> income;
    if (income > 1000) total += income * 0.9;  // 10% deduction
    else               total += income;
}
cout << total;
```

---

### 5. Conditional Output Based on Multiple Rules

```cpp
int a, b; cin >> a >> b;
if (a > b)      cout << "A wins";
else if (b > a) cout << "B wins";
else            cout << "Draw";
```

---

### 6. Multi-Rule Employee Classification

```cpp
string dept; int exp, salary;
cin >> dept >> exp >> salary;
if (dept == "IT" && exp >= 5 && salary < 80000)
    cout << "Eligible for promotion";
else if (dept == "HR" && exp >= 3)
    cout << "Eligible for promotion";
else
    cout << "Not eligible";
```

---

### 7. Bank Account Transaction Simulation

```cpp
int balance = 10000;
int n; cin >> n;
while (n--) {
    string type; int amount;
    cin >> type >> amount;
    if (type == "DEPOSIT") {
        balance += amount;
        cout << "Balance: " << balance << "\n";
    } else if (type == "WITHDRAW") {
        if (amount > balance) cout << "Insufficient funds\n";
        else { balance -= amount; cout << "Balance: " << balance << "\n"; }
    }
}
```

---

### 8. Elevator Simulation

```cpp
int floor, target;
cin >> floor >> target;
int steps = abs(target - floor);
cout << "Elevator moves " << steps << " floor(s) ";
cout << (target > floor ? "UP" : "DOWN") << "\n";
```

---

### 9. Library Book Management

```cpp
map<string, bool> library;  // book → available
string action, book;
cin >> action >> book;
if (action == "ISSUE") {
    if (library.find(book) == library.end() || library[book])
        { library[book] = false; cout << "Issued\n"; }
    else cout << "Not available\n";
} else if (action == "RETURN") {
    library[book] = true;
    cout << "Returned\n";
}
```

---

### 10. Pattern: Multiple Items, Calculate Total

```cpp
int n; cin >> n;
double total = 0;
for (int i = 0; i < n; i++) {
    string item; int qty; double price;
    cin >> item >> qty >> price;
    double cost = qty * price;
    if (qty > 10) cost *= 0.9;   // 10% discount if bulk
    total += cost;
}
cout << fixed << setprecision(2) << total;
```

---

## ⚡ TCS Simulation Problem Templates

| Story Keywords | Pattern |
|---|---|
| "Salary", "Tax", "Income" | Slab-based if-else |
| "ATM", "Notes", "Denomination" | Greedy: largest note first |
| "Day 1, Day 2...", "N rounds" | Loop with conditions |
| "Bank", "Deposit", "Withdraw" | Balance tracking with checks |
| "Marks", "Grade", "Score" | Score range → string output |
| "Buy K items", "Discount if > N" | Loop + conditional multiplier |
| "Eligible if conditions" | Multi-condition if-else |
| "Elevator", "Steps", "Floor" | abs(target - current) |

---

## 🚨 Common Mistakes to Avoid

- **Forgetting integer overflow:** Use `long long` for large salary/amount totals
- **String comparison:** Use `==` for `std::string`, NOT `strcmp` (unless char*)
- **Input order:** Read inputs in EXACTLY the order the problem states
- **Edge cases:** balance = 0, marks = 0, n = 0 → always handle
- **Multiple test cases:** Wrap in `while(t--)` if T test cases are given

---

## 📋 Useful C++ for Simulation

```cpp
// Formatted decimal output
cout << fixed << setprecision(2) << value;

// String comparison
if (s == "YES") { ... }

// Read full line (when input has spaces)
getline(cin, s);

// Absolute value
abs(a - b)

// String to int / int to string
int x = stoi("42");
string s = to_string(42);

// Map for lookup tables
map<string, int> price;
price["Apple"] = 10;
price["Banana"] = 5;
```

---

## 🎯 TCS NQT PYQ Patterns (Simulation)

1. **"N customers buy items, compute total with discounts"** → loop + if-else
2. **"Employee gets bonus if exp > 5 and salary < 50k"** → multi-condition
3. **"ATM dispenses notes of 100, 50, 20 for given amount"** → greedy denominations
4. **"Student gets grade based on marks range"** → if-else ladder
5. **"After each transaction, print updated balance"** → running total
6. **"Car park: charge differently for first 2hrs and after"** → time-slab billing

---

## 🏆 Exam Day Strategy for Simulation Questions

1. **Read only the last 2 paragraphs first** — they define input/output format
2. **Identify the core "if this → do that" rule** from the problem body
3. **Write pseudocode before coding:** `for each item → if condition → compute`
4. **Get sample I/O right** — that alone gives 20-30% marks
5. **Add edge cases last** (n=0, empty, max values)

---

> 💡 **Golden Rule:** Simulation problems are just `if-else inside a loop`. No exotic data structures needed. Read carefully, code simply, test with the given example. TCS values correctness over cleverness.
