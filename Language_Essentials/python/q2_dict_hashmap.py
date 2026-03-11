# Dictionary (Hash Map) Operations - TCS NQT
from collections import Counter, defaultdict

def map_operations():
    # --- 1. Ordered Map Simulation (Standard dict keeps insertion order) ---
    print("--- Dictionary ---")
    age_dict = {}
    
    # Insert elements
    age_dict["Alice"] = 25
    age_dict["Bob"] = 22
    age_dict["Charlie"] = 30
    
    # Traversal
    for key, val in age_dict.items():
        print(f"{key} is {val} years old.")
        
    # Find element
    if "Bob" in age_dict:
        print("Bob is found in map.")
        
    # --- 2. Frequency Counting (Counter & defaultdict) ---
    print("\n--- Frequency Counting ---")
    
    arr = [1, 2, 2, 3, 1, 4, 1, 2]
    
    # Using collections.Counter (Fastest)
    freq = Counter(arr)
    
    for key, val in freq.items():
        print(f"Number {key} appears {val} times.")
        
    print("\n--- DefaultDict approach ---")
    # Using defaultdict
    freq_dd = defaultdict(int)
    for x in arr:
        freq_dd[x] += 1
        
    # Also valid: frequency counting manually using .get()
    # freq_man = {}
    # for x in arr: freq_man[x] = freq_man.get(x, 0) + 1

if __name__ == "__main__":
    map_operations()
