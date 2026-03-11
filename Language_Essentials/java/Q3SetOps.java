// Set Operations - TCS NQT
import java.util.HashSet;
import java.util.TreeSet;

public class Q3SetOps {
    public static void main(String[] args) {
        // --- 1. TreeSet (Stores unique elements in sorted order) ---
        System.out.println("--- TreeSet ---");
        TreeSet<Integer> ts = new TreeSet<>();
        
        // Insert elements
        ts.add(10);
        ts.add(5);
        ts.add(20);
        ts.add(10); // Duplicate, will not be added
        
        System.out.print("TreeSet elements: ");
        for (int x : ts) {
            System.out.print(x + " "); // Output: 5 10 20
        }
        System.out.println();
        
        // Check if element exists
        if (ts.contains(10)) {
            System.out.println("10 is present in the set.");
        }
        
        // Erase element
        ts.remove(5);
        System.out.println("After erasing 5, size is: " + ts.size());
        
        // --- 2. HashSet (Faster O(1) time, checks for duplicates without sorting) ---
        System.out.println("\n--- HashSet ---");
        HashSet<Integer> hs = new HashSet<>();
        hs.add(3);
        hs.add(1);
        hs.add(3); // Ignored
        
        System.out.print("HashSet elements: ");
        for (int x : hs) {
            System.out.print(x + " "); 
        }
        System.out.println();
    }
}
