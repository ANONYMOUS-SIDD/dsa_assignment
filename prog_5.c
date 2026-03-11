#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int graph[MAX][MAX];
int visited[MAX];
int n;

void BFS(int start) {
    int queue[MAX], front=0, rear=0;
    for(int i=0;i<n;i++) visited[i]=0;

    queue[rear++] = start;
    visited[start] = 1;

    printf("BFS Traversal: ");
    while(front != rear) {
        int node = queue[front++];
        printf("%d ", node);

        for(int i=0;i<n;i++) {
            if(graph[node][i] && !visited[i]) {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

void DFSUtil(int node) {
    visited[node] = 1;
    printf("%d ", node);

    for(int i=0;i<n;i++) {
        if(graph[node][i] && !visited[i]) {
            DFSUtil(i);
        }
    }
}

void DFS(int start) {
    for(int i=0;i<n;i++) visited[i]=0;
    printf("DFS Traversal: ");
    DFSUtil(start);
    printf("\n");
}

int main() {
    n = 5;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            graph[i][j]=0;

    // Example graph edges
    graph[0][1]=1; graph[1][0]=1;
    graph[0][2]=1; graph[2][0]=1;
    graph[1][2]=1; graph[2][1]=1;
    graph[1][3]=1; graph[3][1]=1;
    graph[2][4]=1; graph[4][2]=1;

    BFS(0);
    DFS(0);

    return 0;
}
