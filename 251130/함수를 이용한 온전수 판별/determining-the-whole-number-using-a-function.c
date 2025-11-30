#include <stdio.h>

int is_pure_number(int *n) {
    int num = *n;
    int is_it = !(num % 2 == 0 || num % 10 == 5 || (num % 3 == 0 && num % 9 != 0));
    return is_it;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    // Please write your code here.
    int count = 0;

    for (int i = A; i <= B; i++)
        if (is_pure_number(&i))
            count++;

    printf("%d", count);

    
    return 0;
}