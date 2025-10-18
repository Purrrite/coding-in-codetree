#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[10];
    for (int i = 0; i < 10; i++) scanf("%d", &arr[i]);

    static const int CRITRIA_NUMBER = 500;

    int critria_upper = 1001, critria_lower = -1;

    for (int i = 0; i < 10; i++) {
        if (critria_lower < arr[i] && arr[i] < CRITRIA_NUMBER) {
            critria_lower = arr[i];
        }
        if (critria_upper > arr[i] && CRITRIA_NUMBER < arr[i]) {
            critria_upper = arr[i];
        }
    }

    printf("%d %d", critria_lower, critria_upper);

    return 0;
}