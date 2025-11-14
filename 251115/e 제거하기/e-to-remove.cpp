#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    char letter_should_be_dead = 'e';

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == letter_should_be_dead) {
            str = str.substr(0, i) + str.substr(i + 1);
            break;
        }
    }

    cout << str << endl;

    return 0;
}