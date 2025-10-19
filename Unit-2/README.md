# Concept of Sorting
- Goal: Arrange data in a specific order (ascending or descending).
- Benefits: Improves search efficiency, enables binary search, and helps in data organization.

## Sorting Algorithms

| Algorithm         | Time Complexity                   |   Stable? | In-place? |   Best Use Case               |
| ------------------| ----------------------------------|-----------|-----------|-------------------            |
| Bubble Sort       |   O(n^2)                          |   Yes     | Yes       |   Small datasets, teaching    |
| Selection Sort    |   O(n^2)                          |   No      | Yes       |   Simple implementation       |
| Quick Sort        |   O(n \log n) avg, O(n^2) worst   |   No      | Yes       |   Fast, general-purpose       |
| Merge Sort        |   O(n \log n)                     |   Yes     | No        |   Large datasets, stable sorting  | 


## Recursion
Recursion is the process in which a function calls itself repeatedly until a specified condition (called the base case) is satisfied.

Recursion is a programming technique in which a function calls itself directly or indirectly to solve a problem.
Each recursive call solves a smaller instance of the same problem until it reaches a base case, which stops further recursion.

It is commonly used for problems that can be divided into smaller, similar subproblems such as factorial calculation, Fibonacci series, searching, and sorting.

### Structure of a Recursive Function
A recursive function generally has two main parts:
- Base Case – The terminating condition that stops the recursion.
- Recursive Case – The part where the function calls itself with a smaller input.