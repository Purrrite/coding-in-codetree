#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str1, str2;
    cin >> str1 >> str2;

    for (int i = 0; i < 2; i++) {
        str2[i] = str1[i];
    }

    cout << str2;

    return 0;
}