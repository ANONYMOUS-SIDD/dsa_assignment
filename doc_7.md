# Question 7 Documentation

## (a) Data Structure Definition
The program uses an adjacency matrix to represent a weighted graph:

int graph[V][V];  // stores edge weights, 0 means no edge

- dist[V] array stores the shortest distance from source to each vertex
- visited[V] array tracks visited vertices

---

## (b) Functions Description

minDistance(int dist[], int visited[]) – returns the vertex with the minimum distance that has not been visited

dijkstra(int graph[V][V], int src) – implements Dijkstra’s algorithm to find the shortest paths from source `src`

---

## (c) main() Overview
1. Define a weighted graph using an adjacency matrix
2. Call `dijkstra()` with source vertex
3. Print shortest distance from source to all other vertices

---

## (d) Sample Output

Vertex 	 Distance from Source 0  
0 		 0  
1 		 10  
2 		 50  
3 		 30  
4 		 60
