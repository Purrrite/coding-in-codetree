#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Please write your code here
    int N, M;
    cin >> N >> M;

    int arr[100][100];

    int count = 0;

    for (int i = 0; i < M; i++) // 가로 행
    {
        if (i % 2 == 0) // 0 2 4
            for (int j = 0; j < N; j++)
            {
                arr[j][i] = count;
                count++;
            }
        else // 1 3
            for (int j = N - 1; j >= 0; j--)
            {
                arr[j][i] = count;
                count++;
            }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}