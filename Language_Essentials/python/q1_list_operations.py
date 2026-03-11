# List/Array Operations - TCS NQT

def process_list():
    # 1. Initialization
    lst = [10, 20, 30]
    
    # 2. Add elements
    lst.append(40)
    lst.append(50)
    
    print("Initial list:", lst)
    
    # 3. Access elements
    print("First element:", lst[0])
    print("Last element:", lst[-1])
    print("Element at index 2:", lst[2])
    
    # 4. Remove elements
    lst.pop() # Removes 50
    print("After pop:", lst)
    
    # 5. Size 
    print("Size:", len(lst))
    
    # 6. Sorting
    lst2 = [5, 2, 8, 1, 9]
    lst2.sort()
    print("Sorted lst2:", lst2)
    
    # 7. Reversing
    lst2.reverse() # In-place
    print("Reversed lst2:", lst2)

if __name__ == "__main__":
    process_list()
