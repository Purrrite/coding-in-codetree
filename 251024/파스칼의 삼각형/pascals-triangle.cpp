#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Please write your code here.
    int N;
    cin >> N;
    vector<vector<int>> pascal_triangle(N, vector<int>(N, 0));

    for (int i = 0; i < N; i++)
    {
        pascal_triangle[i][0] = 1;
        pascal_triangle[i][i] = 1;
    }

    for (int i = 2; i < N; i++)
    {
        for (int j = 1; j < i; j++)
        {
            pascal_triangle[i][j] = pascal_triangle[i - 1][j - 1] + pascal_triangle[i - 1][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << pascal_triangle[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}