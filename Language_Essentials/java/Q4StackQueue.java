// Stack and Queue Operations - TCS NQT
import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class Q4StackQueue {
    public static void main(String[] args) {
        // --- 1. Stack (LIFO - Last In First Out) ---
        System.out.println("--- Stack Operations ---");
        Stack<Integer> st = new Stack<>();
        
        st.push(10);
        st.push(20);
        st.push(30); // 30 is at the top
        
        System.out.println("Stack Top: " + st.peek());
        
        st.pop(); // Removes 30
        System.out.println("Stack Top after pop: " + st.peek());
        System.out.println("Stack Size: " + st.size());
        
        // --- 2. Queue (FIFO - First In First Out) ---
        // Queue is an interface in Java, implemented by LinkedList
        System.out.println("\n--- Queue Operations ---");
        Queue<String> q = new LinkedList<>();
        
        q.add("First");
        q.add("Second");
        q.add("Third"); // "First" is at the front
        
        System.out.println("Queue Front: " + q.peek());
        
        q.poll(); // Removes "First", returning null if empty
        // Alternatively, q.remove() throws exception if empty
        System.out.println("Queue Front after poll: " + q.peek());
    }
}
