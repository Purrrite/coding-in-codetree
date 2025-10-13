#include <stdio.h>

int a, b;

int is_prime(int input) {
    for (int i = 2; i < input; i++) {
        if (input % i == 0) return 0;
    }
    return 1;
}

int main() {
    scanf("%d %d", &a, &b);
    // Please write your code here.
    int sum = 0;
    
    for (int i = a; i <= b; i++) {
        sum = is_prime(i) ? sum + i : sum;
    }

    printf("%d", sum);
    return 0;
}