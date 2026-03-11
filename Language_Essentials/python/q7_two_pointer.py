# Two-Pointer Technique - TCS NQT

def has_pair_with_sum(arr, target):
    left = 0
    right = len(arr) - 1
    
    while left < right:
        current_sum = arr[left] + arr[right]
        
        if current_sum == target:
            print(f"Pair found: {arr[left]} + {arr[right]} = {target}")
            return True
        elif current_sum < target:
            left += 1  # Need larger sum
        else:
            right -= 1 # Need smaller sum
            
    print(f"No pair found for target {target}")
    return False

def main():
    arr = [2, 4, 6, 8, 10, 12, 14]
    target = 18
    
    print("Array:", arr)
    print("Target:", target)
    
    has_pair_with_sum(arr, target)

if __name__ == "__main__":
    main()
