#include <stdio.h>

void compute(int *a, int *b) { //a와 b는 같지 않음.
    int x = *a, y = *b;

    *a = x > y ? x * 2 : x + 10;
    *b = y > x ? y * 2 : y + 10;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    // Please write your code here.
    compute(&a, &b);

    printf("%d %d", a, b);
    
    return 0;
}