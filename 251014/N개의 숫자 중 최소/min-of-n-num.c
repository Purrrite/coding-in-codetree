#include <stdio.h>
int compute()
{
}

int main()
{
    // Please write your code here.
    int N;
    scanf("%d", &N);

    int array[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }

    int min_val = array[0];
    int min_count = 0;

    for (int i = 1; i < N; i++) // -1 
    {
        if (min_val > array[i])
        {
            min_val = array[i];
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (array[i] == min_val)
        {
            min_count++;
        }
    }

    printf("%d %d", min_val, min_count);

    return 0;
}