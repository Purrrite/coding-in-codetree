#include <stdio.h>
void print_stars(int input) {
    for (int i = 0; i < input; i++) {
        printf("* ");
    }
    printf("\n");
    return;
}

void recall_function(int n) {
    if (n <= 0) return;

    print_stars(n);
    recall_function(n - 1);
    print_stars(n);

}

int main() {
    int n;
    scanf("%d", &n);

    // Please write your code here.
    recall_function(n);
    
    return 0;
}