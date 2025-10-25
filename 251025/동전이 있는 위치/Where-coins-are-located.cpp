#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Please write your code here.
    int arr_size, coin_number;
    cin >> arr_size >> coin_number;

    vector<vector<int>> coin_arr(arr_size, vector<int>(arr_size, 0));

    for (int i = 0; i < coin_number; i++)
    {
        int input_r, input_c;
        cin >> input_r >> input_c;
        int r = input_r - 1;
        int c = input_c - 1;

        coin_arr[r][c] = 1;
    }

    for (int col = 0; col < arr_size; col++)
    {
        for (int row = 0; row < arr_size; row++)
        {
            cout << coin_arr[col][row] << ' ';
        }
        cout << endl;
    }

    return 0;
}