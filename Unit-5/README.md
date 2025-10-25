# 🌳 Trees: Definition & Basic Concepts
- A tree is a hierarchical data structure made of nodes connected by edges.
- Root: Topmost node.
- Parent/Child: Nodes connected directly.
- Leaf: Node with no children.
- Height: Longest path from root to leaf.
- Depth: Distance from root to a node.

## Types of Trees in Data Structures
1. General Tree
- Each node can have any number of children
- Used in file systems, organizational charts
- No strict structure or limit on branching

2. Binary Tree
- Each node has at most two children: left and right
- Foundation for many specialized trees
- Traversals: in-order, pre-order, post-order, level-order

3. Binary Search Tree (BST)
- A binary tree with ordering:
- Left child < root < right child
- Enables efficient search, insert, delete (average case: O(log n))

4. Balanced Binary Trees
- Trees where height is minimized for performance
- Examples:
- AVL Tree: Self-balancing BST using height difference
- Red-Black Tree: Balances using color rules

5. Complete Binary Tree
- All levels are fully filled except possibly the last
- Last level filled left to right
- Used in heaps

6. Full Binary Tree
- Every node has 0 or 2 children
- No node has only one child

7. Perfect Binary Tree
- All internal nodes have 2 children
- All leaf nodes are at the same level

8. Heap Tree
- A complete binary tree used for priority queues
- Max Heap: Parent ≥ children
- Min Heap: Parent ≤ children

9. Trie (Prefix Tree)
- Used for storing strings efficiently
- Each node represents a character
- Common in autocomplete and dictionary apps

10. B-Tree and B+ Tree
- Multi-way search trees used in databases and file systems
- Nodes can have more than two children
- B+ Tree stores all values in leaf nodes for faster range queries

11. Segment Tree
- Used for range queries (sum, min, max) in arrays
- Built recursively and supports fast updates

12. Fenwick Tree (Binary Indexed Tree)
- Efficient for prefix sums and updates
- Used in competitive programming and frequency analysis

### Linked Tree Representation
- Each node contains:
- data
- Pointer to left child
- Pointer to right child (for binary trees)
- Example: 
```cpp
class Node {
    int data;
    Node* left;
    Node* right;
};
```

## 🌲 Binary Tree Basics
- Each node has at most two children: left and right.
- Types:
    - **Full Binary Tree**: Every node has 0 or 2 children.
    - **Complete Binary Tree**: All levels filled except possibly the last.
    - **Perfect Binary Tree**: All internal nodes have two children, all leaves at same level.

### 🔄 Binary Tree Traversals
| Type          | Order               | 
|---------------|---------------------|
| Pre-order     | Root → Left → Right | 
| In-order      | Left → Root → Right | 
| Post-order    | Left → Root → Right |
| Level-order   | Breadth-first traversal using a queue |


<img src="https://media.geeksforgeeks.org/wp-content/uploads/20240811023858/Binary-Tree-Representation.webp" width=400px>

### Binary Tree: Key Properties
1. Node Structure
- Each node has:
    - Data
    - **Left child pointer**
    - **Right child pointer**
2. Maximum Nodes at Level l
- A binary tree can have at most 2^l nodes at level l (starting from level 0).
3. Maximum Nodes in a Tree of Height h
- A binary tree of height h can have at most 2^{h+1} - 1 nodes.
4. Minimum Height for n Nodes
- The minimum height of a binary tree with n nodes is \lceil \log_2(n+1) \rceil - 1.
5. Recursive Nature
- Binary trees are naturally recursive:
- Each subtree is itself a binary tree.
- Traversal and operations often use recursion.
6. Balanced vs Unbalanced
- Balanced: Height difference between left and right subtree is minimal.
- Unbalanced: One side is significantly deeper than the other.
7. Binary Search Tree (BST) Property
- For any node:
- Left subtree values < node
- Right subtree values > node

