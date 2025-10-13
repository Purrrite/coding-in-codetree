#include <stdio.h>
int is_three_six_nine(int input) {
    while (input > 1) {
        int digit = input % 10;
        if (digit == 3 || digit == 6 || digit == 9) return 1;
        input /= 10;
    }
    return 0;
}
int is_divisible_by_three(int input) {
    if (input % 3 == 0) return 1;
    
    return 0;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    // Please write your code here.
    int count = 0;

    for (int i = a; i <= b; i++) {
    if (is_divisible_by_three(i) || is_three_six_nine(i)) count++;
    }

    printf("%d", count);
    return 0;
}