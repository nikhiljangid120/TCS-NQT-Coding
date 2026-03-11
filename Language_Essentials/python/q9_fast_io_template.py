# Universal Fast I/O Template for Competitive Programming - Python
import sys
import math
from collections import Counter, defaultdict, deque

# For recursion depth in complex graphs
sys.setrecursionlimit(10**6)

def solve(input_data):
    if not input_data:
        return
        
    # Read first token (usually number of test cases or N)
    # T = int(input_data[0])
    
    # Iterator makes parsing space-separated tokens very fast
    it = iter(input_data)
    
    try:
        n = int(next(it))
        print(f"Solving test case for N = {n}")
        
    except StopIteration:
        pass

if __name__ == '__main__':
    # Reads all standard input at once (much faster than input())
    # Split by whitespace (handles both spaces and newlines)
    # Use standard input() ONLY if interactive problem
    
    # For testing locally, we'll just print a message
    print("Fast I/O template successfully executing...")
    print("Use sys.stdin.read().split() for extreme speed in TCS NQT")
    
    # In actual contest:
    # input_data = sys.stdin.read().split()
    # solve(input_data)
