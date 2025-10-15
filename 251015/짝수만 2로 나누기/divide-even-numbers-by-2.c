#include <stdio.h>

int n;
int arr[50];

void divide(int *input_arr) {
    for (int i = 0; i < n; i++) {
        if (input_arr[i] % 2 == 0) {
            input_arr[i] /= 2;
        }
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Please write your code here.
    divide(arr);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}