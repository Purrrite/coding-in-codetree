#include <stdio.h>

int main() {
    // Please write your code here.
    char fruits[4][21];

    for (int i = 0; i < 4; i++) {
        scanf("%s ", fruits[i]);
    }

    for (int i = 3; i >= 0; i--) {
        printf("%s\n", fruits[i]);
    }

    return 0;
}