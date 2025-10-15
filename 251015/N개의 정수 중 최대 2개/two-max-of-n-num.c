#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++) scanf("%d", &arr[i]);

    int max_num = arr[0];
    int second_max_num = arr[0];

    for (int i = 1; i < N; i++) {
        if (max_num < arr[i]) max_num = arr[i];
    }

    for (int i = 1; i < N; i++) {
        if (second_max_num < arr[i] && arr[i] < max_num) second_max_num = arr[i];
    }

    printf("%d %d\n", max_num, second_max_num);

    return 0;
}