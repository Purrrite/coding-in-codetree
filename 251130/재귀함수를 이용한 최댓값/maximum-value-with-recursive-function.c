#include <stdio.h>

int arr[100];

int find_max(int N)
{   
    static int max_num = 0;

    if (arr[N] == 0) return max_num;

    if (max_num < arr[N]){
        max_num = arr[N];
    }

    find_max(N + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (n <= 1) // 예외 처리 (왜 이딴게 AI한테 물어보면 써야 하는지 모르겠음)
    {
        printf("%d", arr[0]);
        return 0;
    }

    int output = find_max(0);
    printf("%d", output);
    // int max_index = 0;

    // for (int i = 0; i < n; i++) {
    //     if (arr[i] > arr[max_index]) {
    //         max_index = i;
    //     }
    // }

    // printf("%d", arr[max_index]);

    return 0;
}
