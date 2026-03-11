#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void insertAfter(struct Node* prevNode, int data) {
    if (prevNode == NULL) return;
    struct Node* newNode = createNode(data);
    newNode->next = prevNode->next;
    newNode->prev = prevNode;
    if (prevNode->next != NULL) prevNode->next->prev = newNode;
    prevNode->next = newNode;
}

void deleteNode(struct Node** head, struct Node* delNode) {
    if (*head == NULL || delNode == NULL) return;
    if (*head == delNode) *head = delNode->next;
    if (delNode->next != NULL) delNode->next->prev = delNode->prev;
    if (delNode->prev != NULL) delNode->prev->next = delNode->next;
    free(delNode);
}

void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = createNode(10);
    insertAfter(head, 20);
    insertAfter(head, 15);
    insertAfter(head->next, 25);

    printf("Doubly Linked List: ");
    display(head);

    printf("Deleting node 15...\n");
    deleteNode(&head, head->next);

    printf("Updated List: ");
    display(head);

    return 0;
}
