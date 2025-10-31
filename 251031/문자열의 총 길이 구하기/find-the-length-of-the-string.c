#include <stdio.h>
char string[10][200];
int count = 0;

int main() {
    // Please write your code here.
    for (int i = 0; i < 10; i++) {
        scanf("%s", string[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; string[i][j] != '\0'; j++) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}