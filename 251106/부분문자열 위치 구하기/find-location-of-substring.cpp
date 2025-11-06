#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str, compare_str; // apple pp
    cin >> str >> compare_str; // water water

    int str_len = str.length(); //5
    int compare_str_len = compare_str.length(); //5
    int output_index = -1;

    for (int i = 0; i <= str_len - compare_str_len; i++) {
        bool is_same = false;
        int count = 0;

        for (int j = 0; j < compare_str_len; j++) {
            if (str[i + j] == compare_str[j])
                count++;
        }

        if (count == compare_str_len) {
            is_same = true;
            output_index = i;
            break;
        }
    }

    cout << output_index << endl;
    return 0;
}