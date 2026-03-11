# Question 5 Documentation

## (a) Data Structure Definition
The program uses an **adjacency matrix** to represent an undirected graph:

int graph[MAX][MAX];

- `graph[i][j] = 1` indicates an edge between node i and node j
- `visited[MAX]` array is used to keep track of visited nodes in BFS/DFS

---

## (b) Functions Description

BFS(int start) – traverses the graph using **Breadth-First Search** from the start node

DFS(int start) – traverses the graph using **Depth-First Search** from the start node

DFSUtil(int node) – helper function for DFS recursion

---

## (c) main() Overview
1. Define the number of nodes
2. Initialize adjacency matrix with 0
3. Add edges to the graph
4. Call BFS() and DFS() from the starting node
5. Print the traversal order

---

## (d) Sample Output

BFS Traversal: 0 1 2 3 4  
DFS Traversal: 0 1 2 4 3
