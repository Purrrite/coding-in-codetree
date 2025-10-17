#include <stdio.h>

int sum_by_digit(int n);

int main() {
    int n;
    scanf("%d", &n);
    // Please write your code here.
    int output = sum_by_digit(n);
    printf("%d", output);

    return 0;
}

int sum_by_digit(int n) {
    if (n < 10) return n * n;

    return sum_by_digit(n / 10) + (n % 10) * (n % 10);
}