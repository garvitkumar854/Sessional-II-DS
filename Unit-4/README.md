# Stack
A stack is a linear data structure that follows the LIFO principle — Last In, First Out. This means the last element added to the stack is the first one to be removed.

### 🔁 Real-Life Analogy:
Think of a stack of plates:
- You add a plate on top → Push
- You remove the top plate → Pop
- You can only access the top plate → Peek


## Core Operations
| Operation         | Description                                   |
|-------------------|-----------------------------------------------|
| Push(x)           | Adds element x to the top of the stack        | 
| Pop()             | Removes the top element                       | 
| Peek() / Top()    | Returns the top element without removing it   | 
| isEmpty()         | Check if the stack is empty                   | 
| isFull()          | Check if the stack is full                    | 

### Stack Representation
1. Array-Based Stack
- Fixed size
- Easy to implement
- Risk of overflow
2. Linked List-Based Stack
- Dynamic size
- No overflow unless memory is full
- More flexible


# Queue
A Queue is a linear data structure that follows the FIFO principle — First In, First Out. This means the first element added is the first one to be removed

## Core Operations
| Operation         | Description                                   | 
|-------------------|-----------------------------------------------|
| enqueue(x)        | Add element `x` to the rear of the queue      | 
| dequeue()         | Removes the front element                     | 
| peek()            | Returns the front element without removing it | 
| isEmpty()         | Checks if the queue is empty                  | 

### 🧑‍💻 Implementations
- Array-based: Fixed size, fast access.
- Linked list-based: Dynamic size, flexible memory usage.
- STL Queue: Available in C++ Standard Template Library.

## 🧠 Core Properties of Queue
#### 1. FIFO Principle (First In, First Out)
- The first element inserted is the first to be removed.
- Ensures fair processing order — like people standing in line.
#### 2. Two Pointers: front and rear
- front: Points to the first element (to be dequeued).
- rear: Points to the last element (where new elements are enqueued).
#### 3. Linear Structure
- Elements are stored in a sequential order.
- Can be implemented using arrays or linked lists.
#### 4. Restricted Access
- Insertion only at the rear.
- Deletion only from the front.
- No random access like arrays.
#### 5. Overflow and Underflow
- Overflow: When trying to enqueue into a full queue (in array-based).
- Underflow: When trying to dequeue from an empty queue.
#### 6. Dynamic or Static Size
- Array-based: Fixed size (static).
- Linked list-based: Flexible size (dynamic).
#### 7. Time Complexity
- All operations (enqueue, dequeue, peek) are O(1) in ideal implementations.
