#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    int N;
    scanf("%d", &N);

    int arr[N];
    int arr_count[N];
    
    memset(arr_count, 0, sizeof(arr_count));

    int max_num = -1;

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); //input

        arr_count[arr[i] - 1]++;
    }

    // for (int i = 0; i < N; i++) printf("%d ", arr_count[i]);
    // printf("\n");

    for (int i = 0; i < N; i++) {
        if (max_num < arr[i] && arr_count[arr[i] - 1] == 1) {
            max_num = arr[i];
        }
    }

    printf("%d", max_num);


    return 0;
}