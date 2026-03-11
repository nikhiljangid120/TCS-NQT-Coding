# Common String Functions - TCS NQT

def string_ops():
    s = "Welcome to TCS NQT"
    
    # 1. Length
    print("Length:", len(s))
    
    # 2. Substring using slicing
    # python uses start:end indices (end is exclusive)
    sub = s[11:14]
    print("Substring:", sub) # Output: TCS
    
    # 3. Find substring/character
    pos = s.find("NQT")
    if pos != -1:
        print(f"'NQT' found at index: {pos}")
        
    # 4. Concatenation
    s2 = s + " 2026!"
    print("Concatenated:", s2)
    
    # 5. Reverse string using slicing
    to_rev = "hello"
    reversed_str = to_rev[::-1]
    print("Reversed:", reversed_str)
    
    # 6. String to Integer
    num_str = "12345"
    num = int(num_str)
    print("Integer value + 5:", num + 5)
    
    # 7. Integer to String
    val = 987
    val_str = str(val)
    print("String value:", val_str)

if __name__ == "__main__":
    string_ops()
