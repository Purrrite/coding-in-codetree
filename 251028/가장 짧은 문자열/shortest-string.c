#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char inputs[3][20];
    int input_length[3];

    for (int i = 0; i < 3; i++) {
        scanf("%s", &inputs[i]);
        input_length[i] = strlen(inputs[i]);
    }

    int len_max = 0;
    int len_min = 20;
    for (int i = 0; i < 3; i++) {
        len_max = input_length[i] > len_max ? input_length[i] : len_max;
        len_min = input_length[i] < len_min ? input_length[i] : len_min;
    }

    int output = len_max - len_min;
    printf("%d", output);

    return 0;
}