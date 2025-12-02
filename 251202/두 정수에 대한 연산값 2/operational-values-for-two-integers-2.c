#include <stdio.h>

void compute(int *a, int *b) { //a와 b는 같지 않음.
    *a = *a > *b ? *a * 2 : *a + 10;
    *b = *b > *a ? *b * 2 : *b + 10;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    // Please write your code here.
    compute(&a, &b);

    printf("%d %d", a, b);
    
    return 0;
}