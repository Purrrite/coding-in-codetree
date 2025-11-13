#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    int input_index = 0;

    while (str.length() > 1) {
        cin >> input_index;

        int erase_index = input_index >= str.length() ? str.length() - 1 : input_index;

        str.erase(erase_index, 1);
        cout << str << endl;
    }

    return 0;
}