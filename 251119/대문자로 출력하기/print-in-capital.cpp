#include <iostream>
#include <string>
using namespace std;

//아스키 코드에서는 소문자가 값이 더 큼

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    
    for (int i = 0; i < str.length(); i++) {
        char current_letter = str[i];
        if (isalpha(current_letter)) {
            char output_letter = 'a' <= current_letter && current_letter <= 'z' ?
            current_letter - ('a' - 'A') : current_letter;
            cout << output_letter;
        }
    }

    cout << endl;

    return 0;
}