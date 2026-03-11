# Prefix Sum Array Technique - TCS NQT

def prefix_sum_ops():
    arr = [1, 2, 3, 4, 5, 6]
    n = len(arr)
    
    # 1. Compute Prefix Sum Array
    # prefix[i] will store sum of elements from arr[0] to arr[i-1]
    # Length is n + 1, all initialized to 0
    prefix = [0] * (n + 1)
    
    for i in range(n):
        prefix[i + 1] = prefix[i] + arr[i]
        
    print("Original Array:", arr)
    print("Prefix Sum Array:", prefix)
    
    # 2. Answer Range Queries in O(1) time
    # Query: Sum from index L to R (inclusive, 0-indexed)
    # Formula: sum(L, R) = prefix[R + 1] - prefix[L]
    
    L = 1
    R = 4  # Elements: 2, 3, 4, 5. Expected Sum: 14
    range_sum = prefix[R + 1] - prefix[L]
    
    print(f"\nSum of elements from index {L} to {R} is: {range_sum}")

if __name__ == "__main__":
    prefix_sum_ops()
