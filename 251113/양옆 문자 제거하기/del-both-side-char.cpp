#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string input;
    cin >> input;

    string output = input[0] + input.substr(2, input.length() - 4) + input[input.length() - 1];
    cout << output << endl;
    return 0;
}