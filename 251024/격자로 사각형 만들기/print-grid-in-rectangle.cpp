#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    vector<vector<int>> square(N, vector<int>(N, 0));

    for (int i = 0; i < N; i++) {
        square[0][i] = 1;
        square[i][0] = 1;
    }

    for (int i = 1; i < N; i++) {
        for (int j = 1; j < N; j++) {
            square[i][j] = square[i - 1][j] + square[i][j - 1] + square[i - 1][j - 1];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << square[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}