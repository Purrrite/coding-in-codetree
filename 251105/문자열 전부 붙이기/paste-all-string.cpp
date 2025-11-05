#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    vector<string> str_arr(N);
    string output;

    for (int i = 0; i < N; i++) {
        cin >> str_arr[i];
        output += str_arr[i];
    }

    cout << output;
    
    return 0;
}