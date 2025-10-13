#include <stdio.h>

void print_square(int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("1");
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    // Please write your code here.
    print_square(n, m);
    return 0;
}