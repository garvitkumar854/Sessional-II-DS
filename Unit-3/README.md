# Linked List
A Linked List is a linear data structure in which elements, called nodes, are stored in non-contiguous memory locations.

Each node contains:
1. Data – The value of the element.
2. Pointer (Next) – Address of the next node in the list.

Unlike arrays, linked lists do not require contiguous memory and can grow or shrink dynamically.

## Types of Linked Lists

#### Singly Linked List:
- Each node contains data and next pointer.
- Traversal is one-way (forward only).

#### Doubly Linked List:
- Each node contains data, next pointer, and previous pointer.
- Traversal can be forward and backward.

### Advantages of Linked Lists
- Dynamic size – Can grow and shrink during runtime.
- Efficient insertions and deletions at any position (O(1) if pointer known).
- No memory wastage (unlike fixed-size arrays).

### Disadvantages of Linked Lists
- Extra memory required for pointers.
- Random access is not possible; traversal required from head.
- Slightly slower than arrays due to pointer overhead.


<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250619155958124670/Linked-list.webp" width=500px>