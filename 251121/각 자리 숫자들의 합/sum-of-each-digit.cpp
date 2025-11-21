#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int N, sum = 0;
    cin >> N;

    string str_N = to_string(N);

    for (int i = 0; i < str_N.length(); i++) {
        sum += str_N[i] - '0';
    }

    cout << sum << endl;
    return 0;
}