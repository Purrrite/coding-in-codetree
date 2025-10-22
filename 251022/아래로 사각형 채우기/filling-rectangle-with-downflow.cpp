#include <iostream>
#include <vector>
using namespace std;

int arr[10][10];

int main()
{
    int N;
    cin >> N;

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int input_number = (i + 1) + (j * N);
            arr[i][j] = input_number;
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}