#include <stdio.h>

const static char fruits[5][20] = { "apple", "banana", "grape", "blueberry", "orange"};

int main() {
    // Please write your code here.
    char input;
    scanf("%c", &input);

    int count = 0;

    for (int i = 0; i < 5; i++) {
        if (input == fruits[i][2] || input == fruits[i][3]) {
            printf("%s\n", fruits[i]);
            count++;
        }
    }

    printf("%d", count);

    return 0;
}