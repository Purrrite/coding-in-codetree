#include <stdio.h>
int factorial(int N) {
    if (N <= 0) return 1;
    return factorial(N - 1) * N;
}

int main(void) {
    int n;
    scanf("%d", &n);
    
    // Please write your code here.
    printf("%d", factorial(n));
    
    return 0;
}