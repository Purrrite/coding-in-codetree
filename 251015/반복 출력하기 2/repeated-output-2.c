#include <stdio.h>
void print_hello(int N) {
    if (N <= 0) return;

    printf("HelloWorld\n");
    print_hello(N - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    
    // Please write your code here.
    print_hello(n);

    return 0;
}