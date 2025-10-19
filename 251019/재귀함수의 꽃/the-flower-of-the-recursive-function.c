#include <stdio.h>
void f(int n) {
    if (n <= 0) return;

    printf("%d ",n);
    f(n - 1);
    printf("%d ",n);
}

int main(void) {
    int n;
    scanf("%d", &n);
    // Please write your code here.
    f(n);
    return 0;
}