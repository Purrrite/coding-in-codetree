#include <stdio.h>

int arr_len;
int arr[100];

void seletion_sort(int arr[])
{
    for (int i = 0; i < arr_len - 1; i++)
    {
        int min_index = i;
        for (int j = i; arr[j] != 0; j++)
        {
            if (arr[j] < arr[min_index])
                min_index = j;
        }

        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main()
{
    scanf("%d", &arr_len);
    for (int i = 0; i < arr_len; i++)
        scanf("%d", &arr[i]);

    seletion_sort(arr);

    for (int i = 0; i < arr_len; i++)
        printf("%d ", arr[i]);

    return 0;
}