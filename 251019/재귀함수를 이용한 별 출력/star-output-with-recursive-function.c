#include <stdio.h>

void print_stars(int number) {
    if (number <= 0) return;

    print_stars(number - 1);
    
    for (int i = 0; i < number; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    // Please write your code here.
    print_stars(n);

    return 0;
}