#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    vector<vector<int>> arr(5, vector<int>(5, 1));

    // for (int i = 0; i < 5; i++) {
    //     arr[0][i] = 1;
    //     arr[i][0] = 1;
    // }

    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}