#include <stdio.h>
#include <string.h>

char strings[20][21];
char check;
int N;
int letter_count = 0, letter_length_sum = 0;
float letter_length_avarge = 0;

void input() {
    scanf("%d", &N);

    for (int i = 0; i < N; i++){
        scanf("%s", strings[i]);
        // printf("%s\n", strings[i]);
    }

    scanf("%s", &check);
}

void compute() {
    for (int i = 0; i < N; i++) {
        char first_letter = strings[i][0];
        if (check == first_letter) {
            letter_count++;
            letter_length_sum += strlen(strings[i]);
        }
    }
    letter_length_avarge = (float)letter_length_sum / letter_count;
}

int main() {
    // Please write your code here.
    input();
    compute();
    printf("%d %.2f", letter_count, letter_length_avarge);
    return 0;
}