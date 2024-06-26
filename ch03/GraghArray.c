#include <stdio.h>
#define SIZE 5

int main(void) { // Changed return type to int
    int graph[SIZE][SIZE] = {0, };
    int i, j, vertex, edge, e1, e2;
    
    printf("\n 정점 개수 : ");
    scanf("%d", &vertex); // Changed to scanf
    printf("\n 간선 개수 : ");
    scanf("%d", &edge); // Changed to scanf
    for(i = 0; i < edge; i++) {
        printf("\n 간선 시작 번호 : ");
        scanf("%d", &e1); // Changed to scanf
        printf("\n 간선 끝 번호 : ");
        scanf("%d", &e2); // Changed to scanf
        graph[e1][e2] = 1;
    }
    printf("\n\n인접 행렬\n");
    for(i = 0; i < vertex; i++) {
        for(j = 0; j < vertex; j++)
            printf("%5d", graph[i][j]);
        printf("\n");
    }

    return 0; // Added return statement for main
}
