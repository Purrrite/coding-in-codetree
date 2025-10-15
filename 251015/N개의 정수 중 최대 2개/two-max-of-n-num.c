#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++) scanf("%d", &arr[i]);

    int max_num = -2147483648;
    int second_max_num = -2147483648;

    for (int i = 0; i < N; i++) {
        if (max_num < arr[i]) max_num = arr[i]; // 2147483647 
    }

    for (int i = 0; i < N; i++) {
        if (second_max_num < arr[i] && arr[i] < max_num) second_max_num = arr[i]; // 100
    }

    printf("%d %d\n", max_num, second_max_num);

    return 0;
}