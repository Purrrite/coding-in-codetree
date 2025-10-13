#include <stdio.h>
int min(int a, int b, int c) {
    int minimum = (a <= b && a <= c) ? a : (b <= c) ? b : c;
    return minimum;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    // Please write your code here.
    int output = min(a, b, c);
    printf("%d", output);
    return 0;
}