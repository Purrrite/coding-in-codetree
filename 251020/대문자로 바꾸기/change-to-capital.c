#include <stdio.h>

const int TO_CAPITAL_LETTERS = 'A' - 'a';
char arr[5][3];

int main(void)
{
    // Please write your code here.
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%c ", &arr[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] += TO_CAPITAL_LETTERS;
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}