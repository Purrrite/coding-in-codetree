#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[100];
    int arr_len = 0;
    
    for (int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 999 || arr[i] == -999) {
            break;
        }
        arr_len++;
    }

    int min_num = arr[0];
    int max_num = arr[0];

    for (int i = 1; i < arr_len; i++) {
        if (arr[i] > max_num) max_num = arr[i];
        if (arr[i] < min_num) min_num = arr[i];
    }

    printf("%d %d", max_num, min_num);



    return 0;
}