# Question 6 Documentation

## (a) Data Structure Definition
The program uses an array to represent the heap:

int arr[];  // stores elements of the heap

- For Max Heap: parent >= children
- For Min Heap: parent <= children

---

## (b) Functions Description

swap(int *a,int *b) – swaps two values

heapifyMax(int arr[],int n,int i) – maintains the Max Heap property for a subtree

heapifyMin(int arr[],int n,int i) – maintains the Min Heap property for a subtree

buildMaxHeap(int arr[],int n) – builds Max Heap from array

buildMinHeap(int arr[],int n) – builds Min Heap from array

printArray(int arr[],int n) – prints the array

---

## (c) main() Overview
1. Define an unsorted array
2. Build Max Heap using buildMaxHeap()
3. Print Max Heap
4. Build Min Heap using buildMinHeap()
5. Print Min Heap

---

## (d) Sample Output

Max Heap: 10 5 3 4 1  
Min Heap: 1 4 3 5 10
