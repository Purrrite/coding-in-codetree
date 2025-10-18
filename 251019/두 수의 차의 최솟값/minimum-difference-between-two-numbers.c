#include <stdio.h>
#include <limits.h>

int main()
{
    // Please write your code here.
    int N;
    scanf("%d", &N);

    int arr[10];
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    int diffrence_min = INT_MAX;

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int current_diffrence = arr[j] - arr[i];
            if (current_diffrence < diffrence_min)
                diffrence_min = current_diffrence;
        }
    }

    printf("%d", diffrence_min);

    return 0;
}