#include <stdio.h>
void print_string(int input) {
    for (int i = 0; i < input; i++) printf("12345^&*()_\n");
}
int main() {
    int row_num;
    scanf("%d", &row_num);
    // Please write your code here.
    print_string(row_num);
    return 0;
}