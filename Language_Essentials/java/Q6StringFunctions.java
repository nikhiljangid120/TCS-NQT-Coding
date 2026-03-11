// Common String Functions - TCS NQT

public class Q6StringFunctions {
    public static void main(String[] args) {
        String s = "Welcome to TCS NQT";
        
        // 1. Length/Size
        System.out.println("Length: " + s.length());
        
        // 2. Substring (start_index, end_index_exclusive)
        System.out.println("Substring: " + s.substring(11, 14)); // Output: TCS
        
        // 3. Find string/character
        int pos = s.indexOf("NQT");
        if (pos != -1) {
            System.out.println("'NQT' found at index: " + pos);
        }
        
        // 4. Concatenation
        String s2 = s + " 2026!";
        System.out.println("Concatenated: " + s2);
        
        // 5. Reverse string (must use StringBuilder)
        String toRev = "hello";
        String reversed = new StringBuilder(toRev).reverse().toString();
        System.out.println("Reversed: " + reversed);
        
        // 6. String to Integer 
        String numStr = "12345";
        int num = Integer.parseInt(numStr);
        System.out.println("Integer value + 5: " + (num + 5));
        
        // 7. Integer to String 
        int val = 987;
        String valStr = String.valueOf(val);
        // or Integer.toString(val);
        System.out.println("String value: " + valStr);
    }
}
