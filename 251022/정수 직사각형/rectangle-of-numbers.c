#include <stdio.h>

int main() {
    // Please write your code here.
    int N, M;
    scanf("%d %d", &N, &M);
    int arr[100][100];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d ", &arr[i][j]);
        }
    }

    int counter = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            counter++;
            arr[i][j] = counter;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}