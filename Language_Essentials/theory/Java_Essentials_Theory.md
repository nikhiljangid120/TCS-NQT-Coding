# ☕ JAVA ESSENTIALS — THEORY, TRICKS & TIPS
## TCS NQT 2026 Prep Guide

---

## 🔑 What You Must Know for TCS

Java is heavily used for competitive programming. You need to master:
1. Fast I/O using `BufferedReader`
2. Collections Framework (`ArrayList`, `HashMap`, `HashSet`, `Stack`, `Queue`)
3. String and `StringBuilder` operations
4. Sorting with Arrays and Collections + `Comparator`
5. Type casting and handling large numbers (`long`, `BigInteger`)

---

## 🧠 Core Concepts

### 1. ⭐ THE UNIVERSAL TEMPLATE (Fast I/O)

For TCS, using `Scanner` might cause Time Limit Exceeded (TLE) on large inputs. Use `BufferedReader`:

```java
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int n = Integer.parseInt(st.nextToken());
        
        // your solution here
    }
}
```

---

### 2. ArrayList (Dynamic Array)

```java
ArrayList<Integer> list = new ArrayList<>();
list.add(10);          // Add element
list.add(20);
list.remove(list.size() - 1); // Remove last
list.get(0);           // Access element at index 0
list.size();           // Number of elements
list.isEmpty();        // Check if empty
list.clear();          // Remove all

// Sort ascending
Collections.sort(list); 
// Sort descending
Collections.sort(list, Collections.reverseOrder());
```

---

### 3. HashMap (Key → Value pairs)

```java
HashMap<String, Integer> map = new HashMap<>();
map.put("Alice", 95);
map.put("Bob", 87);

map.get("Alice");           // 95
map.getOrDefault("Charlie", 0); // 0 (Handles missing keys gracefully)
map.containsKey("Alice");   // true

// Frequency Counting trick
map.put("A", map.getOrDefault("A", 0) + 1);

// Iteration
for(Map.Entry<String, Integer> entry : map.entrySet()) {
    System.out.println(entry.getKey() + ": " + entry.getValue());
}
```

---

### 4. HashSet (Unique elements)

```java
HashSet<Integer> set = new HashSet<>();
set.add(5);
set.add(3);
set.add(5); // Duplicate, ignored

set.contains(5); // true
set.remove(5);
set.size();

for(int x : set) {
    System.out.println(x);
}
```

---

### 5. String & StringBuilder

`String` is immutable. Always use `StringBuilder` for heavy concatenations.

```java
String s = "Hello World";
s.length();                // 11
s.substring(0, 5);         // "Hello"
s.indexOf("World");        // 6
s.replace("World", "TCS"); // "Hello TCS"
s.charAt(0);               // 'H'

// StringBuilder for manipulation
StringBuilder sb = new StringBuilder("Hello");
sb.append(" 2026");     // "Hello 2026"
sb.reverse();           // Reverse string
sb.toString();          // Convert back to String
```

---

### 6. Arrays & Sorting

```java
int[] arr = new int[5];
int[] arr2 = {5, 2, 8, 1, 9};

Arrays.sort(arr2); // Sort ascending
System.out.println(Arrays.toString(arr2)); // Print array

// Custom Sorting (requires objects, not primitives)
Integer[] arr3 = {5, 2, 8, 1, 9};
Arrays.sort(arr3, Collections.reverseOrder());
```

---

## ⚡ Java Tricks for TCS Solutions

| Trick | Code |
|---|---|
| Max of two values | `Math.max(a, b)` |
| Min of two values | `Math.min(a, b)` |
| Absolute value | `Math.abs(x)` |
| String to Int | `Integer.parseInt(str)` |
| Int to String | `String.valueOf(num)` |
| Max Integer Value | `Integer.MAX_VALUE` |

---

## 🚨 Common Java Mistakes in TCS

```java
// ❌ WRONG: String comparison
if (str1 == str2) 

// ✅ CORRECT:
if (str1.equals(str2))

// ❌ WRONG: Using Scanner for large fast I/O
Scanner sc = new Scanner(System.in);

// ✅ CORRECT:
BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
```

> 💡 **Golden Rule:** Master `HashMap` for frequency counting and `StringBuilder` for string manipulation. These two will solve 80% of TCS string and array problems!
