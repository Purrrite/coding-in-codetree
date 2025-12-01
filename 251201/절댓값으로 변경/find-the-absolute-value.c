#include <stdio.h>
#define MAX_N 50

int arr[MAX_N];
int n;

void abs_arr(int *arr) {
    for (int i = 0; i < n; i++) {
        *(arr + i) = *(arr + i) < 0 ? -*(arr + i) : *(arr + i);
    }
}

int main() {

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    abs_arr(arr);
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    // Please write your code here.
    
    return 0;
}