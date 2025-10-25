# Graphs

A Graph is a non-linear data structure consisting of:

- a **set of vertices (nodes)**, and
- a **set of edges (connections)** that connect pairs of vertices.

Formally:
G = (V, E)

## Basic Terminologies

| Term            | Meaning                                           |
| --------------- | ------------------------------------------------- |
| Vertex (Node)   | A point in the graph (like A, B, C)               |
| Edge            | A link between two vertices                       |
| Degree          | Number of edges connected to a vertex             |
| Path            | A sequence of vertices connected by edges         |
| Cycle           | A path that starts and ends at the same vertex    |
| Connected Graph | Every vertex is reachable from every other vertex |
| Weighted Graph  | Each edge has a weight or cost assigned to it     |

## Types of Graphs

| Type                         | Description                                | Example                   |
| ---------------------------- | ------------------------------------------ | ------------------------- |
| **Undirected Graph**         | Edges have no direction. (A–B same as B–A) | Social network friendship |
| **Directed Graph (Digraph)** | Edges have direction (A → B ≠ B → A)       | Web links, followers      |
| **Weighted Graph**           | Each edge has a cost/weight                | Maps, shortest path       |
| **Unweighted Graph**         | Edges have no weight                       | Simple relationships      |
| **Cyclic Graph**             | Contains at least one cycle                | Loop connections          |
| **Acyclic Graph**            | No cycles present                          | Tree, DAG                 |
| **Connected Graph**          | Path exists between every pair of vertices | Communication network     |
| **Disconnected Graph**       | Some vertices are not reachable            | Isolated systems          |

<img src="https://cdn-images-1.medium.com/max/800/1*dX9TdlR6wD5lkPnWG1h80g.png" width=750px>

### Graph Representation (Operations)

Graphs can be stored in **two common ways**:

#### 1. Adjacency Matrix

- Represented as a 2D array `A[n][n]`
- `A[i][j] = 1` if there is an edge between vertex `i` and `j`
- `A[i][j] = 0` otherwise
- For weighted graphs, the cell stores the weight instead of `1`.
  Example:
- Vertices: A, B, C
- Edges: A–B, B–C, A–C

|     | A   | B   | C   |
| --- | --- | --- | --- |
| A   | 0   | 1   | 1   |
| B   | 1   | 0   | 1   |
| C   | 1   | 1   | 0   |

**Pros:**

- Easy to implement
- Easy to check if an edge exists `(O(1))`

**Cons:**

- Uses more space `(O(V²))`, even for sparse graphs

#### 2. Adjacency List

- Each vertex has a list of its adjacent vertices.
- Implemented using arrays or linked lists.
  Example (same graph):

```css
A → B → C
B → A → C
C → A → B
```

**Pros:**

- Space efficient for sparse graphs `(O(V + E)`
- Easier to iterate through neighbors

**Cons:**

- Slower to check if a specific edge exists

### Graph Traversal

Traversal means visiting every vertex of the graph in a specific order.
Two most common methods:

#### 1. Breadth First Search (BFS)

-🔹 Idea: - Traverse level by level (like layers in a tree). - Use a **Queue**.

🔹 Algorithm:

```less
BFS(Graph G, start_vertex):
1. Create a queue Q
2. Mark start_vertex as visited and enqueue it
3. While Q is not empty:
       a. Dequeue a vertex v
       b. For each adjacent vertex u of v:
             If u is not visited:
                 Mark u visited
                 Enqueue u
```

- 🔹 Example:

```mathematica
A - B - D
|   |
C   E
```

BFS from A:
A → B → C → D → E

- 🔹 Time Complexity:
  O(V + E)

#### 2. Depth First Search (DFS)

- 🔹 Idea:
- Traverse as far as possible along each branch before backtracking.
- Use a **Stack** (or recursion).

- 🔹 Algorithm:

```markdown
DFS(Graph G, vertex v):

1. Mark v as visited
2. For each adjacent vertex u of v:
   If u not visited:
   DFS(G, u)
```

- 🔹 Example:

```mathematica
A - B - D
|   |
C   E
```

DFS from A:
A → B → D → E → C

- 🔹 Time Complexity:

O(V + E)

### Comparison: BFS vs DFS

| Feature        | BFS           | DFS                 |
| -------------- | ------------- | ------------------- |
| Data Structure | Queue         | Stack / Recursion   |
| Traversal Type | Level order   | Depth (path-wise)   |
| Best for       | Shortest path | Exploring all paths |
| Space          | O(V)          | O(V)                |
| Time           | O(V + E)      | O(V + E)            |
