#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    scanf("%d", &N);

    int arr[1000];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    //===============
    int max_num = 0;
    int max_index;
    int end_index = N;
    
    do {
        for (int i = 0; i < end_index; i++) {
            if (max_num < arr[i]) {
                max_num = arr[i];
                max_index = i;
            }
        }
        end_index = max_index;
        max_num = 0;
        printf("%d ", max_index + 1);

    } while (max_index != 0);


    return 0;
}