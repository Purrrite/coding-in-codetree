#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    int sum = 0;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        sum += num;
    }

    string str_sum = to_string(sum);
    int str_sum_len = str_sum.length();

    string output = str_sum.substr(1, str_sum_len - 1) + str_sum.substr(0, 1);
    cout << output << endl;

    return 0;
}