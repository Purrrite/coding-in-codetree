#include <stdio.h>
int is_magic_number(int ten, int one, int n) {
    if ((n % 2 == 0) && (ten + one) % 5 == 0) return 1;
    else return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    
    // Please write your code here.
    int tens = n / 10;
    int ones = n % 10;

    char *output = is_magic_number(tens, ones, n) ? "Yes" : "No";
    printf("%s", output);
    return 0;
}