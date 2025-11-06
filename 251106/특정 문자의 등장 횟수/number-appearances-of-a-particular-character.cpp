#include <iostream>
#include <string>
using namespace std;

string str;
string compare_1 = "ee";
string compare_2 = "eb";

int compare_1_count = 0;
int compare_2_count = 0;

int main() {
    // Please write your code here.
    cin >> str;
    int str_len = str.length();

    for (int i = 0; i < str_len - 1; i++) {
        if (str[i] == compare_1[0] && str[i + 1] == compare_1[1])
            compare_1_count++;
        if (str[i] == compare_2[0] && str[i + 1] == compare_2[1])
            compare_2_count++;
    }

    cout << compare_1_count << ' ' << compare_2_count;
    return 0;
}