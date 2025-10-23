#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<int>> arr(N, vector<int>(M, 0));

    int count = 1;

    // 대각선 정수 채우기?
    for (int i = 0; i < M + N - 1; i++) // 가로
    {
        int current_column = 0;
        int current_row = i;

        int row_over_num = i - M;

        if (row_over_num >= 0)
        { // 가로 초과 케이스
            current_row = M - 1;
            current_column = row_over_num + 1;
        }

        while (current_column < N && current_row >= 0) // 한칸 아래, 한칸 왼쪽 하기
        {
            if (current_row > M)
            {
                current_row--;
                current_column++;
            }

            arr[current_column][current_row] = count;
            count++;

            current_column++;
            current_row--;
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