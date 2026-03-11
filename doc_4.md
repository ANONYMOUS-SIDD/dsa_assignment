# Question 4 Documentation

## (a) Data Structure Definition
The program uses a doubly linked list:

struct Node {
int data;
struct Node* next;
struct Node* prev;
};

- `data` stores the value of the node
- `next` points to the next node
- `prev` points to the previous node

---

## (b) Functions Description

createNode(int data) – creates and returns a new node

insertAfter(struct Node* prevNode, int data) – inserts a new node after a given node

deleteNode(struct Node** head, struct Node* delNode) – deletes a given node from the list

display(struct Node* head) – prints the doubly linked list

---

## (c) main() Overview
1. Create the first node
2. Insert new nodes after given nodes using `insertAfter()`
3. Display the list using `display()`
4. Delete a node using `deleteNode()`
5. Display the updated list

---

## (d) Sample Output

Doubly Linked List: 10 15 20 25  
Deleting node 15...  
Updated List: 10 20 25
