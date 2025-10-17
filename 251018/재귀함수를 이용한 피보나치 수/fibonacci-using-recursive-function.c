#include <stdio.h>
int fibonacci(int n);

int main() {
    int n;
    scanf("%d", &n);
    // Please write your code here.
    printf("%d", fibonacci(n));

    return 0;
}

long long fibonacci(int n) {
    if (n < 0) return 0;
    if (n == 1 || n == 2) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}