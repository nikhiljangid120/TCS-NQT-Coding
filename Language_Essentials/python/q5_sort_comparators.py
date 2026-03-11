# Custom Sorting and Comparators - TCS NQT
from functools import cmp_to_key

def cmp_descending(a, b):
    if a > b: return -1 # Less than zero means a < b in sort order
    if a < b: return 1  # Greater than zero means a > b in sort order
    return 0

def sort_ops():
    lst = [15, 2, 8, 22, 10]
    
    # 1. Default Sort (Ascending)
    lst.sort()
    print("Ascending:", lst)
    
    # 2. Sort Descending
    lst.sort(reverse=True)
    print("Descending (reverse=True):", lst)
    
    # 3. Sort using custom key
    # Key function takes an element and returns a value to sort by
    lst_strs = ["apple", "Banana", "cherry", "Date"]
    lst_strs.sort(key=str.lower)
    print("Sorted ignoring case:", lst_strs)
    
    # 3b. Sort with custom cmp_to_key
    lst_nums = [15, 2, 8, 22, 10]
    lst_nums.sort(key=cmp_to_key(cmp_descending))
    print("Descending (cmp_to_key):", lst_nums)
    
    # 4. Sorting lists of tuples/pairs
    pairs = [(1, 50), (2, 10), (3, 30)]
    
    # Sort pairs by second element ascending
    pairs.sort(key=lambda p: p[1])
    
    print("Pairs sorted by second value:", pairs)

if __name__ == "__main__":
    sort_ops()
