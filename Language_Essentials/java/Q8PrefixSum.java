// Prefix Sum Array Technique - TCS NQT
import java.util.Arrays;

public class Q8PrefixSum {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5, 6};
        int n = arr.length;
        
        // 1. Compute Prefix Sum Array
        // prefix[i] will store sum of elements from arr[0] to arr[i-1]
        int[] prefix = new int[n + 1]; // Auto initialized to 0
        
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + arr[i];
        }
        
        System.out.println("Original Array: " + Arrays.toString(arr));
        System.out.println("Prefix Sum Array: " + Arrays.toString(prefix));
        
        // 2. Answer Range Queries in O(1) time
        // Query: Sum from index L to R (inclusive, 0-indexed)
        // Formula: sum(L, R) = prefix[R + 1] - prefix[L]
        
        int L = 1;
        int R = 4; // Elements: 2, 3, 4, 5. Expected Sum: 14
        int rangeSum = prefix[R + 1] - prefix[L];
        
        System.out.println("\nSum of elements from index " + L + " to " + R + " is: " + rangeSum);
    }
}
