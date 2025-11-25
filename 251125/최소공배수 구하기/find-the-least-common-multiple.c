#include <stdio.h>

void compute_lcm(int N, int M)
{
    int arr[2][1000];
    int count = 1;

    while (1)
    {
        arr[0][count - 1] = N * count;
        arr[1][count - 1] = M * count;

        for (int i = 0; i < count; i++) {
            for (int j = 0; j < count; j++) {
                if (arr[0][i] == arr[1][j])
                {
                    int lcm = arr[0][i];
                    printf("%d", lcm);
                    return;
                }
            }
        }
        count++;
    }
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    compute_lcm(n, m);

    return 0;
}