#include <stdio.h>
int best_profit = 0;
int current_profit = 0;

void profit(void);

int main(void) {
    // Please write your code here.
    int N;
    scanf("%d", &N);

    int arr[1000];
    for (int i = 0; i < N; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < N; i++) {
        int cost = arr[i];
        for (int j = i + 1; j < N; j++) {
            int profit = arr[j];
            current_profit = profit - cost;
            if (best_profit < current_profit){
                best_profit = current_profit;
            }
        }
    }

    printf("%d", best_profit);

    return 0;
}