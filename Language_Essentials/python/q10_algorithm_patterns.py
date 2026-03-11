# Common Algorithm Patterns - TCS NQT
import math
from itertools import permutations

def algo_patterns():
    lst = [4, 1, 7, 3, 9, 2, 4]
    
    print("Original Array:", lst)
    print("\n")
    
    # 1. Max and Min Element
    max_val = max(lst)
    min_val = min(lst)
    print(f"Max Element: {max_val}, Min Element: {min_val}")
    
    # 2. Sum of all elements
    total_sum = sum(lst)
    print(f"Total Sum: {total_sum}")
    
    # 3. Count occurrences of an element
    count_4 = lst.count(4)
    print(f"Occurrences of 4: {count_4}")
    
    # 4. Binary Search (requires sorted array)
    import bisect
    sorted_lst = sorted(lst) # [1, 2, 3, 4, 4, 7, 9]
    
    # Check if 7 exists
    idx = bisect.bisect_left(sorted_lst, 7)
    found = idx != len(sorted_lst) and sorted_lst[idx] == 7
    print(f"Is 7 present (binary search)? {'Yes' if found else 'No'}")
    
    # 5. Permutations (itertools)
    s = "abc"
    print("\nPermutations of 'abc':")
    for p in permutations(s):
        print("".join(p))
        
    # 6. Math utilities
    print(f"\nGCD of 12 and 18: {math.gcd(12, 18)}")
    # lcm available in python 3.9+
    if hasattr(math, 'lcm'):
        print(f"LCM of 12 and 18: {math.lcm(12, 18)}")

if __name__ == "__main__":
    algo_patterns()
