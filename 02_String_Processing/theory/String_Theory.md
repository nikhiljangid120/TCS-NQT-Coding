# 📚 STRING PROCESSING — THEORY, TRICKS & TIPS
## TCS NQT 2026 Prep Guide
---

## 🔑 What TCS Actually Tests

TCS string problems always involve one of:
1. **Counting** — vowels, consonants, specific chars, frequency
2. **Checking** — palindrome, anagram, repeated chars
3. **Reversing** — reverse string, reverse each word, reverse words
4. **Transforming** — toggle case, Caesar cipher, compression
5. **Window scanning** — count chars in a window of size k

> 💡 Strip the story → find the string operation → code it.

---

## 🧠 Core Concepts

### 1. String Input in C++

```cpp
string s;
cin >> s;           // reads one word (stops at space)
getline(cin, s);    // reads full line with spaces
```

> 🚨 **TCS Tip:** Use `getline` when problem says "sentence" or "full line".

---

### 2. Traverse Character by Character

```cpp
for (int i = 0; i < s.size(); i++) {
    char c = s[i];
}
// OR range-based
for (char c : s) { /* process */ }
```

---

### 3. Check Vowel / Consonant

```cpp
bool isVowel(char c) {
    c = tolower(c);
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
```

---

### 4. Reverse a String

```cpp
reverse(s.begin(), s.end());
// OR two-pointer
int l = 0, r = s.size() - 1;
while (l < r) swap(s[l++], s[r--]);
```

---

### 5. Palindrome Check

```cpp
bool isPalindrome(string s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}
```

> 🚨 **TCS Tip:** Always use two-pointer, not string reverse — it's cleaner.

---

### 6. Anagram Check
Two strings are anagrams if they have the same characters with the same frequency.

```cpp
bool isAnagram(string a, string b) {
    if (a.size() != b.size()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

// OR using frequency array (faster)
bool isAnagram(string a, string b) {
    int freq[26] = {0};
    for (char c : a) freq[c - 'a']++;
    for (char c : b) freq[c - 'a']--;
    for (int i = 0; i < 26; i++)
        if (freq[i] != 0) return false;
    return true;
}
```

---

### 7. Frequency Map of Characters

```cpp
unordered_map<char, int> freq;
for (char c : s) freq[c]++;
// OR array-based (faster):
int freq[256] = {0};
for (char c : s) freq[c]++;
```

---

### 8. First Non-Repeating Character

```cpp
int freq[256] = {0};
for (char c : s) freq[c]++;
for (char c : s) {
    if (freq[c] == 1) { cout << c; break; }
}
```

---

### 9. Reverse Words in a String

```cpp
string result = "";
stringstream ss(s);
string word;
vector<string> words;
while (ss >> word) words.push_back(word);
reverse(words.begin(), words.end());
for (int i = 0; i < words.size(); i++) {
    if (i > 0) result += " ";
    result += words[i];
}
```

---

### 10. Toggle Case

```cpp
for (char& c : s) {
    if (isupper(c)) c = tolower(c);
    else if (islower(c)) c = toupper(c);
}
```

---

### 11. Caesar Cipher (Shift Cipher)

```cpp
int shift = 3;
for (char& c : s) {
    if (isalpha(c)) {
        char base = isupper(c) ? 'A' : 'a';
        c = (c - base + shift) % 26 + base;
    }
}
```

---

### 12. String Compression
"aaabbc" → "a3b2c1"

```cpp
string compressed = "";
int i = 0;
while (i < s.size()) {
    char curr = s[i];
    int count = 0;
    while (i < s.size() && s[i] == curr) { count++; i++; }
    compressed += curr + to_string(count);
}
```

---

### 13. Sliding Window on String (Count chars in window of k)

```cpp
int k = 3;
unordered_map<char, int> window;
// Initialize first window
for (int i = 0; i < k; i++) window[s[i]]++;
// Slide
for (int i = k; i < s.size(); i++) {
    window[s[i]]++;           // add new char
    window[s[i - k]]--;       // remove old char
    if (window[s[i - k]] == 0) window.erase(s[i - k]);
    // now window has counts for s[i-k+1..i]
}
```

---

## ⚡ TCS-Specific String Tricks

| Situation | Use |
|---|---|
| Check palindrome | Two-pointer |
| Check anagram | Sort both OR frequency array |
| First non-repeating char | Frequency array + second pass |
| Count vowels/consonants | Loop + isVowel helper |
| Toggle case | isupper/islower + tolower/toupper |
| Reverse words | stringstream + vector + reverse |
| Count specific char in window | Sliding window |
| Alphabetical check | c >= 'a' && c <= 'z' |

---

## 🔢 ASCII Values to Remember

| Char | ASCII |
|---|---|
| 'A' | 65 |
| 'Z' | 90 |
| 'a' | 97 |
| 'z' | 122 |
| '0' | 48 |
| '9' | 57 |
| ' ' | 32 |

**Key formulas:**
- `c - 'a'` → index 0–25 for lowercase letters
- `c - 'A'` → index 0–25 for uppercase letters
- `toupper(c)` = `c - 32` (for lowercase letters)
- `tolower(c)` = `c + 32` (for uppercase letters)

---

## 📦 Useful C++ String Functions

```cpp
s.length()            // length of string
s.size()              // same as length
s.substr(start, len)  // substring
s.find("abc")         // first occurrence, returns string::npos if not found
s.replace(i, len, t)  // replace s[i..i+len] with t
s.erase(i, len)       // delete characters
s += "xyz"            // concatenate
to_string(42)         // int to string
stoi("42")            // string to int
```

---

## 📋 Complexity Reference

| Operation | Time |
|---|---|
| Traverse string | O(n) |
| Reverse string | O(n) |
| Check palindrome | O(n) |
| Frequency count | O(n) |
| Anagram (sort) | O(n log n) |
| Anagram (freq) | O(n) |
| Sliding window | O(n) |

---

## 🎯 TCS NQT PYQ Patterns (Strings)

1. **"Check if given word is palindrome"** → Two-pointer
2. **"Count vowels and consonants"** → Loop + isVowel
3. **"Two strings are anagrams or not"** → Sort both or freq array
4. **"Find first non-repeating character"** → Freq array, second pass
5. **"Reverse all words in a sentence"** → Split by space, reverse vector
6. **"Count occurrences of each character"** → Frequency map
7. **"Compress string aaa → a3"** → Run-length encoding loop

---

> 💡 **Golden Rule:** In TCS, string length n ≤ 1000. Always try O(n) or O(n log n). If stuck — brute force nested loops will still pass within time.