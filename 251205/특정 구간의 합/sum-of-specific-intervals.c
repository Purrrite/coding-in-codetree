#include <stdio.h>

int arr[101];
int queryA[2][101];

int each_sum(int *start, int *end) {
    int sum = 0;
    for (int i = *start - 1; i < *end; i++) 
        sum += arr[i];
    
    return sum;
}

int main() {
    int n, m, i;
    scanf("%d %d", &n, &m);
    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < m; i++) {
        scanf("%d %d", &queryA[0][i], &queryA[1][i]);
    }
    
    for (int i = 0; i < m; i++) {
        int output = each_sum(&queryA[0][i], &queryA[1][i]);
        printf("%d\n", output);
    }
    // Please write your code here.
    return 0;
}