#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<vector<int>> arr(N, vector<int>(N, 0));

    for (int row = N; row > 0; row--)
    {
        int system_row = row - 1;
        static int count = 1, row_count = 0;

        if (row_count % 2 == 0)
            for (int column = N; column > 0; column--)
            {
                int system_column = column - 1;
                arr[system_column][system_row] = count;
                count++;
            }
        else
            for (int column = 1; column <= N; column++)
            {
                int system_column = column - 1;
                arr[system_column][system_row] = count;
                count++;
            }

            row_count++;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}