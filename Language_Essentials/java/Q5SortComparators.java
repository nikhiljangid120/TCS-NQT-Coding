// Custom Sorting and Comparators - TCS NQT
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;

public class Q5SortComparators {
    static class Pair {
        int first, second;
        Pair(int f, int s) { first = f; second = s; }
    }

    public static void main(String[] args) {
        ArrayList<Integer> v = new ArrayList<>();
        Collections.addAll(v, 15, 2, 8, 22, 10);
        
        // 1. Default Sort (Ascending)
        Collections.sort(v);
        System.out.println("Ascending: " + v);
        
        // 2. Sort Descending using Collections.reverseOrder()
        Collections.sort(v, Collections.reverseOrder());
        System.out.println("Descending: " + v);
        
        // 3. Sorting Array of Primitives (ascending only built-in)
        int[] arr = {15, 2, 8, 22, 10};
        Arrays.sort(arr);
        System.out.println("Ascending array: " + Arrays.toString(arr));
        
        // Note: To sort primitives descending, you must use Integer[] or manually reverse
        
        // 4. Sort Descending using custom comparator
        ArrayList<Integer> v2 = new ArrayList<>(v);
        v2.sort((a, b) -> Integer.compare(b, a));
        System.out.println("Descending (custom lambda): " + v2);
        
        // 5. Sorting objects (pairs)
        ArrayList<Pair> pairs = new ArrayList<>();
        pairs.add(new Pair(1, 50));
        pairs.add(new Pair(2, 10));
        pairs.add(new Pair(3, 30));
        
        // Sort pairs by second value ascending
        pairs.sort(Comparator.comparingInt(p -> p.second));
        
        System.out.print("Pairs sorted by second value: ");
        for(Pair p : pairs) {
            System.out.print("{" + p.first + ", " + p.second + "} ");
        }
        System.out.println();
    }
}
