// Two-Pointer Technique - TCS NQT
import java.util.Arrays;

public class Q7TwoPointer {
    
    // Find pair with given sum in a sorted array
    public static boolean hasPairWithSum(int[] arr, int target) {
        int left = 0;
        int right = arr.length - 1;
        
        while (left < right) {
            int currentSum = arr[left] + arr[right];
            
            if (currentSum == target) {
                System.out.println("Pair found: " + arr[left] + " + " + arr[right] + " = " + target);
                return true;
            } else if (currentSum < target) {
                left++; // Need larger sum
            } else {
                right--; // Need smaller sum
            }
        }
        System.out.println("No pair found for target " + target);
        return false;
    }

    public static void main(String[] args) {
        int[] arr = {2, 4, 6, 8, 10, 12, 14};
        int target = 18;
        
        System.out.println("Array: " + Arrays.toString(arr));
        System.out.println("Target: " + target);
        
        hasPairWithSum(arr, target);
    }
}
