#include <stdio.h>
int sum(int N) {
    if (N <= 1) return 1;

    return sum(N - 1) + N;

}

int main() {
    int n;
    scanf("%d", &n);
    // Please write your code here.
    int output = sum(n);
    printf("%d", output);
    return 0;
}