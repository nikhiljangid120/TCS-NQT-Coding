// ArrayList Operations - TCS NQT
import java.util.ArrayList;
import java.util.Collections;

public class Q1ListOperations {
    public static void printList(ArrayList<Integer> list) {
        for (int num : list) {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        // 1. Initialization
        ArrayList<Integer> list = new ArrayList<>();
        list.add(10);
        list.add(20);
        list.add(30);
        
        // 2. Add elements
        list.add(40);
        list.add(50);
        
        System.out.print("Initial list: ");
        printList(list);
        
        // 3. Access elements
        System.out.println("First element: " + list.get(0));
        System.out.println("Last element: " + list.get(list.size() - 1));
        System.out.println("Element at index 2: " + list.get(2));
        
        // 4. Remove elements
        list.remove(list.size() - 1); // Removes 50 (index)
        System.out.print("After remove: ");
        printList(list);
        
        // 5. Size
        System.out.println("Size: " + list.size());
        
        // 6. Sorting
        ArrayList<Integer> list2 = new ArrayList<>();
        Collections.addAll(list2, 5, 2, 8, 1, 9);
        Collections.sort(list2);
        System.out.print("Sorted list2: ");
        printList(list2);
        
        // 7. Reversing
        Collections.reverse(list2);
        System.out.print("Reversed list2: ");
        printList(list2);
    }
}
