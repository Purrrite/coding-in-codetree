#include <stdio.h>
#include <string.h>

#define SIZE 3
#define MAX_CHAR 20

int main() {
    // Please write your code here.
    char inputs[SIZE][MAX_CHAR];
    int input_length[SIZE];

    for (int i = 0; i < SIZE; i++) {
        scanf("%s", &inputs[i]);
        input_length[i] = strlen(inputs[i]);
    }

    int len_max = 0;
    int len_min = MAX_CHAR;
    for (int i = 0; i < SIZE; i++) {
        len_max = input_length[i] > len_max ? input_length[i] : len_max;
        len_min = input_length[i] < len_min ? input_length[i] : len_min;
    }

    int output = len_max - len_min;
    printf("%d", output);

    return 0;
}