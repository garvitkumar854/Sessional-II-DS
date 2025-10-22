# 🌳 Trees: Definition & Basic Concepts
- A tree is a hierarchical data structure made of nodes connected by edges.
- Root: Topmost node.
- Parent/Child: Nodes connected directly.
- Leaf: Node with no children.
- Height: Longest path from root to leaf.
- Depth: Distance from root to a node.


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


### Binary Tree: Key Properties
1. Node Structure
- Each node has:
    - Data
    - **Left child pointer**
    - *Right child pointer*
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

