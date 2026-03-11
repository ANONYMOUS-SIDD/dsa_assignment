# Question 3 Documentation

## (a) Data Structure Definition
The program uses a **singly linked list**:

struct Node {
int data;
struct Node* next;
};

- `data` stores the value of the node
- `next` points to the next node in the list

---

## (b) Functions Description

createNode(int data) – creates and returns a new node

insertEnd(struct Node** head, int data) – inserts a new node at the end of the linked list

reverseTraversal(struct Node* head) – prints the linked list in reverse order using recursion

display(struct Node* head) – prints the linked list in normal order

---

## (c) main() Overview
1. Create an empty linked list (`head = NULL`)
2. Insert nodes into the linked list using `insertEnd()`
3. Display the linked list in normal order using `display()`
4. Display the linked list in reverse order using `reverseTraversal()`

---

## (d) Sample Output

Original Linked List: 10 20 30 40  
Reverse Traversal: 40 30 20 10
