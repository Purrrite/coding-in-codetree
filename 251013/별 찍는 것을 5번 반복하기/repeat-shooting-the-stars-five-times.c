#include <stdio.h>
void print_10_stars() {
    for (int i = 0; i < 10; i++) {
        printf("*");
    }
    printf("\n");
    
}

int main() {
    // Please write your code here.
    for (int i = 0; i < 5; i++) {
        print_10_stars();
    }
    return 0;
}