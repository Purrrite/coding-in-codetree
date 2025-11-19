#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int sum = 0; 

    string nickname;
    cin >> nickname;

    for (char c : nickname) {
        if ('1' <= c && c <= '9') {
            int c_to_int = c - '0';
            sum += c_to_int;
        }
    }

    cout << sum << endl;
    return 0;
}