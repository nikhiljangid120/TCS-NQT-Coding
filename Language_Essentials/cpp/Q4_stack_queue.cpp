// Stack and Queue Operations - TCS NQT
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    // --- 1. Stack (LIFO - Last In First Out) ---
    cout << "--- Stack Operations ---" << endl;
    stack<int> st;
    
    st.push(10);
    st.push(20);
    st.push(30); // 30 is at the top
    
    cout << "Stack Top: " << st.top() << endl;
    
    st.pop(); // Removes 30
    cout << "Stack Top after pop: " << st.top() << endl;
    cout << "Stack Size: " << st.size() << endl;
    
    // --- 2. Queue (FIFO - First In First Out) ---
    cout << "\n--- Queue Operations ---" << endl;
    queue<string> q;
    
    q.push("First");
    q.push("Second");
    q.push("Third"); // "First" is at the front
    
    cout << "Queue Front: " << q.front() << endl;
    cout << "Queue Back: " << q.back() << endl;
    
    q.pop(); // Removes "First"
    cout << "Queue Front after pop: " << q.front() << endl;
    
    return 0;
}
