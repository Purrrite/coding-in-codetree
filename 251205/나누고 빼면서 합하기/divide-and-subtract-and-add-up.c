#include <stdio.h>

int arr[101];
int sum = 0;

void compute(int *m) {
    while (*m != 1) {
        sum += arr[*m - 1];
        // printf("%d\n",arr[*m - 1]);
        *m = *m % 2 == 0 ? *m / 2 : *m - 1;
    } 
    sum += arr[0];

    return;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    compute(&m);

    printf("%d", sum);
    // Please write your code here.
    return 0;
}