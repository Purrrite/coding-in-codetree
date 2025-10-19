#include <stdio.h>
int sum(int N) {
    if (N <= 2) return N;

    return sum(N - 2) + N;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int output = sum(n);
    // Please write your code here.
    printf("%d", output);

    return 0;
}