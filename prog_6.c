#include <stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void heapifyMax(int arr[], int n, int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<n && arr[left]>arr[largest]) largest=left;
    if(right<n && arr[right]>arr[largest]) largest=right;

    if(largest!=i){
        swap(&arr[i], &arr[largest]);
        heapifyMax(arr,n,largest);
    }
}

void heapifyMin(int arr[], int n, int i){
    int smallest=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<n && arr[left]<arr[smallest]) smallest=left;
    if(right<n && arr[right]<arr[smallest]) smallest=right;

    if(smallest!=i){
        swap(&arr[i], &arr[smallest]);
        heapifyMin(arr,n,smallest);
    }
}

void buildMaxHeap(int arr[], int n){
    for(int i=n/2-1;i>=0;i--) heapifyMax(arr,n,i);
}

void buildMinHeap(int arr[], int n){
    for(int i=n/2-1;i>=0;i--) heapifyMin(arr,n,i);
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
}

int main(){
    int arr[]={4,10,3,5,1};
    int n=5;

    buildMaxHeap(arr,n);
    printf("Max Heap: ");
    printArray(arr,n);

    int arr2[]={4,10,3,5,1};
    buildMinHeap(arr2,n);
    printf("Min Heap: ");
    printArray(arr2,n);

    return 0;
}
