#include <stdio.h>

int compute(int n, int m) {
    int start_num = n < m ? m : n;
    for (int i = start_num - 1; i >= 0; i--) {
        if (n % i == 0 && m % i == 0) {
            return i;
            break;
        }
    }
    return 0;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int output = compute(n, m);
    printf("%d", output);
    
    return 0;
}