
---

## 🌟 Detailed Question-wise Explanation

<details>
<summary>1️⃣ Balanced Parentheses ✅</summary>

<div style="background-color:#e6f7ff; padding:15px; border-radius:12px; margin-top:8px;">

**Problem Statement:**  
Check whether a given mathematical expression has balanced parentheses. It should consider `()`, `[]`, `{}`.

**Concepts Used:** Stack

**Data Structure:**
- Stack implemented as an array to store opening brackets.

**Algorithm / Steps:**
1. Traverse the expression character by character.
2. If an opening bracket (`(`, `[`, `{`) is found, push it onto the stack.
3. If a closing bracket is found, check if the stack is empty:
    - If empty → Not balanced.
    - Else, pop the top and check if it matches the type of closing bracket.
4. At the end, if the stack is empty → Balanced; else → Not Balanced.

**Code Reference:** `prog_1.c`

**Sample Input/Output:**
<pre>
Input: a + (b - c)
Output: ✅ Balanced

Input: m + [a - b * (c + d * {m)]
Output: ❌ Not Balanced
</pre>

**Explanation:**  
The stack ensures that every opening bracket has a corresponding closing bracket in correct order. Any mismatch or leftover bracket makes the expression unbalanced.

</div>
</details>

<details>
<summary>2️⃣ Infix → Postfix Conversion 🔹</summary>

<div style="background-color:#fff0f6; padding:15px; border-radius:12px; margin-top:8px;">

**Problem Statement:**  
Convert a mathematical expression from infix to postfix and evaluate it.

**Concepts Used:** Stack

**Data Structures:**
- Stack for operators.
- Array/String for storing postfix expression.

**Algorithm / Steps:**
1. Scan the infix expression from left to right.
2. If operand → append to postfix.
3. If operator → pop operators from stack with higher or equal precedence and append, then push current operator.
4. If `(` → push to stack.
5. If `)` → pop until `(` is found.
6. After the expression, pop all remaining operators to postfix.
7. Evaluate postfix using a stack: push operands, pop two operands for operator, push result.

**Code Reference:** `prog_2.c`

**Sample Input/Output:**
<pre>
Input: a + b * c
Postfix: abc*+
Evaluation (with a=2, b=3, c=4): 14
</pre>

**Explanation:**  
Stack is used for **operator precedence management**. Postfix evaluation uses LIFO stack to calculate expressions correctly.

</div>
</details>

<details>
<summary>3️⃣ Reverse Traversal in Linked List 🔄</summary>

<div style="background-color:#f9f0ff; padding:15px; border-radius:12px; margin-top:8px;">

**Problem Statement:**  
Traverse a singly linked list in reverse order without modifying it.

**Concepts Used:** Recursion, Linked List

**Data Structure:** Singly linked list nodes with `data` and `next`.

**Algorithm / Steps:**
1. Use a recursive function:
    - Base case: node is `NULL`.
    - Recursive call on `next` node.
    - Print node data after recursive call (post-order).
2. This prints the list in reverse order.

**Code Reference:** `prog_3.c`

**Sample Input/Output:**
<pre>
Original List: 10 20 30
Reversed Traversal: 30 20 10
</pre>

**Explanation:**  
Recursion creates an implicit stack in memory to reverse the printing order.

</div>
</details>

<details>
<summary>4️⃣ Doubly Linked List ↔️</summary>

<div style="background-color:#fffbe6; padding:15px; border-radius:12px; margin-top:8px;">

**Problem Statement:**  
Implement insert after a given node and delete a given node in a doubly linked list.

**Concepts Used:** Linked List

**Data Structures:** Doubly linked list nodes with `data`, `prev`, and `next`.

**Algorithm / Steps:**
1. Insert:
    - Traverse to given node.
    - Allocate new node, adjust `prev` and `next` pointers.
2. Delete:
    - Traverse to node to delete.
    - Update `prev->next` and `next->prev`.
    - Free node.

**Code Reference:** `prog_4.c`

**Sample Input/Output:**
<pre>
Insert 15 after 10 → 10 15 20
Delete 15 → 10 20
</pre>

**Explanation:**  
Doubly linked list allows bi-directional traversal, making insert and delete efficient.

</div>
</details>

<details>
<summary>5️⃣ Undirected Graph BFS & DFS 🌐</summary>

<div style="background-color:#e6fffb; padding:15px; border-radius:12px; margin-top:8px;">

**Problem Statement:**  
Implement BFS and DFS traversal for an undirected graph represented using adjacency matrix.

**Concepts Used:** Graphs, BFS, DFS

**Data Structures:**
- Adjacency matrix
- Queue for BFS
- Recursion or stack for DFS

**Algorithm / Steps:**
1. BFS:
    - Start at source node.
    - Visit all neighbors level by level using a queue.
2. DFS:
    - Start at source node.
    - Visit node, recursively visit all unvisited neighbors.

**Code Reference:** `prog_5.c`

**Sample Input/Output:**
<pre>
BFS Traversal: 0 1 2 3 4
DFS Traversal: 0 1 2 4 3
</pre>

**Explanation:**  
BFS finds shortest paths in terms of edges, DFS explores paths deeply first.

</div>
</details>

<details>
<summary>6️⃣ Heap Construction 📊</summary>

<div style="background-color:#fff0f6; padding:15px; border-radius:12px; margin-top:8px;">

**Problem Statement:**  
Build Min Heap and Max Heap from an unsorted array.

**Concepts Used:** Heap

**Data Structures:** Array-based Heap

**Algorithm / Steps:**
1. Start from last non-leaf node.
2. Heapify down to maintain heap property:
    - Max Heap: Parent ≥ Children
    - Min Heap: Parent ≤ Children
3. Repeat for all nodes in reverse level order.

**Code Reference:** `prog_6.c`

**Sample Input/Output:**
<pre>
Original Array: 5 1 10 3 4
Max Heap: 10 5 3 1 4
Min Heap: 1 3 4 5 10
</pre>

**Explanation:**  
Heapify ensures each subtree satisfies heap property; root gives max/min.

</div>
</details>

<details>
<summary>7️⃣ Dijkstra's Algorithm 🛣️</summary>

<div style="background-color:#f6ffed; padding:15px; border-radius:12px; margin-top:8px;">

**Problem Statement:**  
Find the shortest path from a source node to all other nodes in a weighted graph.

**Concepts Used:** Graph, Priority Queue

**Data Structures:**
- Adjacency matrix or adjacency list
- Distance array
- Visited set

**Algorithm / Steps:**
1. Initialize distances from source to ∞, source distance = 0.
2. Pick unvisited node with smallest distance.
3. Update distances of adjacent nodes.
4. Repeat until all nodes visited.

**Code Reference:** `prog_7.c`

**Sample Input/Output:**
<pre>
Source Node: 0
Shortest Distances: 0 10 50 30 60
</pre>

**Explanation:**  
Greedy algorithm selects the next nearest node to expand shortest paths.

</div>
</details>

<details>
<summary>8️⃣ Random Array Sorting 🔢</summary>

<div style="background-color:#fff7e6; padding:15px; border-radius:12px; margin-top:8px;">

**Problem Statement:**  
Generate N random integers, let the user select a sorting algorithm, sort, and display comparisons/swaps.

**Concepts Used:** Sorting Algorithms

**Data Structures:** Array

**Algorithm / Steps:**
1. Generate N random integers in [1,1000].
2. Ask user to choose sorting algorithm: Bubble, Selection, Insertion, Merge.
3. Sort array using chosen algorithm.
4. Count and display total comparisons and swaps.

**Code Reference:** `prog_8.c`

**Sample Input/Output:**
<pre>
Original Array: 234 56 789 12 345
Sorted Array: 12 56 234 345 789
Comparisons: 10 | Swaps: 4
</pre>

**Explanation:**  
This demonstrates efficiency differences between sorting algorithms and basic array manipulation.

</div>
</details>

---

## 🔧 Tech Stack Used

<p align="center">
  <img src="https://skillicons.dev/icons?i=c,linux,git,github,vsCode&perline=5" alt="Tech Stack" />
</p>

---

## 👤 Author

**Anonymous**
- Implemented all programs in **C**
- Documented each question with **examples, steps, and output**
- GitHub: [ANONYMOUS-SIDD](https://github.com/ANONYMOUS-SIDD/dsa_assignment)

---

<div align="center" style="margin-top: 24px;">
  <h2 style="color:#1abc9c;">🎯 Thank You for Visiting!</h2>
  <p>Hope this DSA Assignment README inspires your own projects. 🚀</p>
</div>
