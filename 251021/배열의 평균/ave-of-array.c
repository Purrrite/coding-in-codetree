#include <stdio.h>

int arr[2][4];
int row_sum[2], colunm_sum[4], all_sum;
float row_mean[2], colunm_mean[4], all_mean;

int main() {
    // Please write your code here.

    //input
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    //sum compute
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            row_sum[i] += arr[i][j];
            colunm_sum[j] += arr[i][j];
            all_sum += arr[i][j];
        }
    }

    //sum to mean
    for (int i = 0; i < 2; i++) {
        row_mean[i] = (float)row_sum[i] / 4;
    }
    for (int i = 0; i < 4; i++) {
        // printf("%.1f ", colunm_sum[i]);
        colunm_mean[i] = (float)colunm_sum[i] / 2;
        
    }
    all_mean = (float)all_sum / (2 * 4);

    // printf("\n");
    //print
    printf("%.1f %.1f\n", row_mean[0], row_mean[1]);
    printf("%.1f %.1f %.1f %.1f\n", colunm_mean[0], colunm_mean[1], colunm_mean[2], colunm_mean[3]);
    printf("%.1f\n", all_mean);

    return 0;
}