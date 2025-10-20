#include <stdio.h>

int main(void) {
    // Please write your code here.
    int arr[4][4];
int sum_arr[4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", arr[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            sum_arr[i] += arr[i][j];
        }
        printf("%d\n", sum_arr[i]);
    }
    return 0;
}