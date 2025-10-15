#include <stdio.h>
void print_forward(int N) {
    if (N <= 0) return;

    print_forward(N - 1);
    printf("%d ",N);
}

void print_backward(int N) {
    if (N <= 0) return;

    printf("%d ",N);
    print_backward(N - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    // Please write your code here.
    print_forward(n);
    
    printf("\n");

    print_backward(n);
    
    return 0;
}