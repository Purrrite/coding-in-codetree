#include <stdio.h>
int odd_sum(int N) {
    if (N == 1) return 1;

    return odd_sum(N - 2) + N;
}

int even_sum(int N) {
    if (N == 2) return 2;

    return even_sum(N - 2) + N;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int output = 0;
    // Please write your code here.
    if (n % 2 == 0) output = even_sum(n);
    else output = odd_sum(n);

    printf("%d", output);

    return 0;
}