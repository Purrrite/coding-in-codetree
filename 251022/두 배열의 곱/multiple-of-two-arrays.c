#include <stdio.h>

int arr_1[3][3];
int arr_2[3][3];
int output_arr[3][3];

int scan()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d ", &arr_1[i][j]);
        }
    }

    scanf(" "); // 줄바꿈

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d ", &arr_2[i][j]);
        }
    }
}

int main(void)
{
    scan();
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            output_arr[i][j] = arr_1[i][j] * arr_2[i][j]; // Compute

            printf("%d ", output_arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}