#include <stdio.h>

int power(int *a, int *b) {
    int prod = 1;
    for (int i = 0; i < *b; i++)
        prod *= *a;

    return prod;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    // Please write your code here.
    int output = power(&a, &b);
    printf("%d", output);
    return 0;
}