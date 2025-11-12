#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str; // 길이는 2 이상

    int str_len = str.length();

    for (int i = 2; i < str_len; i++) {
        if (str[i] == str[1])
            str[i] = str[0];
    }

    str[1] = str[0];

    cout << str << endl;

    return 0;
}