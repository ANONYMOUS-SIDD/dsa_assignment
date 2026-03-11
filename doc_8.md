# Question 8 Documentation

## (a) Data Structure Definition
The program uses a simple **array of integers**:

int arr[N];  // stores N random integers

- `comparisons` counts comparisons in sorting
- `swaps` counts swaps performed

---

## (b) Functions Description

printArray(int arr[], int n) – prints array elements

bubbleSort(int arr[], int n) – sorts array using Bubble Sort

selectionSort(int arr[], int n) – sorts array using Selection Sort

insertionSort(int arr[], int n) – sorts array using Insertion Sort

mergeSort(int arr[], int l, int r) – sorts array using Merge Sort  
merge(int arr[], int l, int m, int r) – helper function for mergeSort

---

## (c) main() Overview
1. Ask user for number of random integers `N`
2. Generate `N` random integers in range [1,1000]
3. Display the original array
4. Ask user to choose sorting algorithm
5. Sort array using chosen algorithm
6. Display sorted array
7. Display total comparisons and swaps

---

## (d) Sample Output

Enter number of random integers: 5  
Original Array: 234 56 789 12 345  
Choose sorting algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort  
   2  
   Selection Sorted Array: 12 56 234 345 789  
   Total Comparisons: 10  
   Total Swaps: 4
