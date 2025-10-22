#include <stdio.h>

int arr_1[10][10], arr_2[10][10], output_arr[10][10];
int colunm, row;

void input()
{
    scanf("%d %d", &colunm, &row);

    for (int i = 0; i < colunm; i++)
        for (int j = 0; j < row; j++)
            scanf("%d ", &arr_1[i][j]);

    for (int i = 0; i < colunm; i++)
        for (int j = 0; j < row; j++)
            scanf("%d ", &arr_2[i][j]);

    return;
}

int main(void)
{
    input();

    for (int i = 0; i < colunm; i++)
    {
        for (int j = 0; j < row; j++)
        {
            output_arr[i][j] = !(arr_1[i][j] == arr_2[i][j]);
            printf("%d ", output_arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}