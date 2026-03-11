// HashMap Operations - TCS NQT
import java.util.HashMap;
import java.util.Map;
import java.util.TreeMap;

public class Q2HashMap {
    public static void main(String[] args) {
        // --- 1. TreeMap (Maintains sorted order of keys) ---
        System.out.println("--- TreeMap ---");
        TreeMap<String, Integer> treeMap = new TreeMap<>();
        
        // Insert elements
        treeMap.put("Charlie", 30);
        treeMap.put("Alice", 25);
        treeMap.put("Bob", 22);
        
        // Traversal
        for (Map.Entry<String, Integer> entry : treeMap.entrySet()) {
            System.out.println(entry.getKey() + " is " + entry.getValue() + " years old.");
        }
        
        // Find element
        if (treeMap.containsKey("Bob")) {
            System.out.println("Bob is found in map.");
        }
        
        // --- 2. HashMap (Faster O(1) average time, no specific order) ---
        System.out.println("\n--- HashMap (Frequency Counting) ---");
        HashMap<Integer, Integer> freq = new HashMap<>();
        int[] arr = {1, 2, 2, 3, 1, 4, 1, 2};
        
        for(int x : arr) {
            // Very important pattern for frequency maps
            freq.put(x, freq.getOrDefault(x, 0) + 1);
        }
        
        for (Map.Entry<Integer, Integer> entry : freq.entrySet()) {
            System.out.println("Number " + entry.getKey() + " appears " + entry.getValue() + " times.");
        }
    }
}
