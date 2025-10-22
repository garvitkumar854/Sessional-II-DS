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
