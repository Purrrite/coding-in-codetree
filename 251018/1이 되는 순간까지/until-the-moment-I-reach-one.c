#include <stdio.h>
int count = 0;

int f(int n) {
    if (n == 1) return count;

    if (n % 2 == 0) {
        f(n / 2);
        count++;
    }
    else {
        f(n / 3);
        count++;
    }

}


int main() {
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
    // Please write your code here.
    return 0;
}