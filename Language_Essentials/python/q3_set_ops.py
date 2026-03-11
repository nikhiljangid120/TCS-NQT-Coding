# Set Operations - TCS NQT

def set_ops():
    # --- 1. Ordered Set (Python's set is unordered, but preserves insertion order in Python 3.7+) ---
    print("--- Set Operations ---")
    s = set()
    
    # Insert elements
    s.add(10)
    s.add(5)
    s.add(20)
    s.add(10) # Duplicate, will not be added
    
    print("Set elements:")
    for x in s:
        print(x, end=" ") # Order is not guaranteed to be sorted!
    print()
    
    # Check if element exists (O(1) time)
    if 10 in s:
        print("10 is present in the set.")
        
    # Erase element
    if 5 in s:
        s.remove(5)
        
    print(f"After erasing 5, size is: {len(s)}")
    
    # --- 2. Set operations ---
    print("\n--- Additional Set Ops ---")
    s2 = {1, 3, 20}
    
    print("Intersection:", s.intersection(s2))
    print("Union:", s.union(s2))
    print("Difference (s - s2):", s.difference(s2))


if __name__ == "__main__":
    set_ops()
