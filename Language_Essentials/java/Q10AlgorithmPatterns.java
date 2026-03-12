// Common Algorithm Patterns - TCS NQT
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

public class Q10AlgorithmPatterns {
    
    // GCD helper function
    static int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
    
    // LCM helper function
    static int lcm(int a, int b) {
        return (a / gcd(a, b)) * b;
    }

    public static void main(String[] args) {
        ArrayList<Integer> v = new ArrayList<>();
        Collections.addAll(v, 4, 1, 7, 3, 9, 2, 4);
        
        System.out.println("Original Array: " + v + "\n");
        
        // 1. Max and Min Element
        int maxVal = Collections.max(v);
        int minVal = Collections.min(v);
        System.out.println("Max Element: " + maxVal + ", Min Element: " + minVal);
        
        // 2. Sum of all elements
        long totalSum = 0;
        for (int x : v) totalSum += x;
        System.out.println("Total Sum: " + totalSum);
        
        // 3. Count occurrences of an element
        int count4 = Collections.frequency(v, 4);
        System.out.println("Occurrences of 4: " + count4);
        
        // 4. Binary Search (works only on sorted arrays)
        ArrayList<Integer> sorted_v = new ArrayList<>(v);
        Collections.sort(sorted_v); // 1, 2, 3, 4, 4, 7, 9
        
        int idx = Collections.binarySearch(sorted_v, 7);
        boolean found = idx >= 0;
        System.out.println("Is 7 present (binary search)? " + (found ? "Yes" : "No"));
        
        // 5. Math functions
        System.out.println("\nGCD of 12 and 18: " + gcd(12, 18));
        System.out.println("LCM of 12 and 18: " + lcm(12, 18));
    }
}