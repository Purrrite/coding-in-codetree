#include <stdio.h>

int arr[101];
int cnt;

void compute(int *m) {
    while (*m != 1) {
        *m = *m % 2 == 0 ? *m / 2 : *m - 1;

        cnt += arr[*m + 1];
    }

    return;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    cnt = m;
    
    compute(&m);

    printf("%d", cnt);
    // Please write your code here.
    return 0;
}