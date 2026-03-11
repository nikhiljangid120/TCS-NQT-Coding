# Stack and Queue Operations - TCS NQT
from collections import deque

def ds_ops():
    # --- 1. Stack (LIFO - Last In First Out) ---
    print("--- Stack Operations (using list) ---")
    st = []
    
    st.append(10)
    st.append(20)
    st.append(30) # 30 is at the top
    
    print("Stack Top:", st[-1])
    
    st.pop() # Removes 30
    print("Stack Top after pop:", st[-1])
    print("Stack Size:", len(st))
    
    # --- 2. Queue (FIFO - First In First Out) ---
    print("\n--- Queue Operations (using collections.deque) ---")
    # Using a list as a queue is slow for pop(0) -> O(N).
    # Always use deque.
    q = deque()
    
    q.append("First")
    q.append("Second")
    q.append("Third") # "First" is at the front
    
    print("Queue Front:", q[0])
    print("Queue Back:", q[-1])
    
    q.popleft() # Removes "First" in O(1) time
    print("Queue Front after pop:", q[0])

if __name__ == "__main__":
    ds_ops()
