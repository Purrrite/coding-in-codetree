#include <stdio.h>

void f(int *a, int *b) { // a != b 조건 있음
    if (*a > *b) {
        *a += 25;
        *b *= 2;
    }
    else {
        *b += 25;
        *a *= 2;
    }
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    // Please write your code here.
    f(&a, &b);
    
    printf("%d %d", a, b);
    return 0;
}