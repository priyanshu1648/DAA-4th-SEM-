# Week 1: Searching Algorithms

This directory contains implementations of three different searching algorithms:
1. Linear Search
2. Binary Search
3. Jump Search

## Problem Descriptions

### 1. Linear Search
Given an array of nonnegative integers, find whether a given key element is present in the array or not. Also, find total number of comparisons for each input case.
- Time Complexity: O(n)
- Space Complexity: O(1)

### 2. Binary Search
Given an already sorted array of positive integers, find whether a given key element is present in the array or not. Also, find total number of comparisons for each input case.
- Time Complexity: O(log n)
- Space Complexity: O(1)

### 3. Jump Search
Given an already sorted array of positive integers, find whether a given key element is present in the array or not. The algorithm jumps at fixed intervals (√n) and then performs linear search in the found interval.
- Time Complexity: O(√n)
- Space Complexity: O(1)

## Input Format
For all three programs:
```
T (number of test cases)
For each test case:
n (size of array)
n space-separated integers
key (element to search)
```

## Output Format
For all three programs:
```
For each test case:
"Present" or "Not Present" followed by number of comparisons
```

## Sample Input/Output

### Linear Search
```
Input:
3
8
34 35 65 31 25 89 64 30
89
5
977 354 244 546 355
244
6
23 64 13 67 43 56
63

Output:
Present 6
Present 3
Not Present 6
```

### Binary Search
```
Input:
3
5
12 23 36 39 41
41
8
21 39 40 45 51 54 68 72
69
10
101 246 438 561 796 896 899 4644 7999 8545
7999

Output:
Present 3
Not Present 4
Present 3
```

### Jump Search
```
Input:
3
5
12 23 36 39 41
41
8
21 39 40 45 51 54 68 72
69
10
101 246 438 561 796 896 899 4644 7999 8545
7999

Output:
Present 3
Not Present 4
Present 3
```

## How to Compile and Run

```bash
# For Linear Search
g++ linear_search.cpp -o linear_search
./linear_search

# For Binary Search
g++ binary_search.cpp -o binary_search
./binary_search

# For Jump Search
g++ jump_search.cpp -o jump_search
./jump_search
```

## Implementation Details

1. **Linear Search**:
   - Iterates through the array sequentially
   - Counts comparisons for each element checked
   - Stops when element is found or reaches end of array

2. **Binary Search**:
   - Works on sorted arrays
   - Divides array in half at each step
   - Counts comparisons for each division
   - Time complexity is logarithmic

3. **Jump Search**:
   - Jumps at fixed intervals (√n)
   - Once interval is found, performs linear search
   - Optimal for large sorted arrays
   - Better than linear search but worse than binary search 