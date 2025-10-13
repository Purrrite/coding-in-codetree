#include <stdio.h>
int sum_of_numbers(int input);
int compute(int input);

int main() {
    int n;
    scanf("%d", &n);
    // Please write your code here.
    int sum = sum_of_numbers(n);
    int output = compute(sum);
    printf("%d", output);
    return 0;
}

int sum_of_numbers(int input) {
    auto int sum = 0;

    for (int i = 1; i <= input; i++) {
        sum += i;
    }

    return sum;
}

int compute(int sum) {
    return sum / 10;
}