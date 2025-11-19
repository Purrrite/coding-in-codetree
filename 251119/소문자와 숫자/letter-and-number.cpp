#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string email;
    cin >> email;

    for (int i = 0; i < email.length(); i++) {
        char current_letter = email[i];
        if (isdigit(current_letter) || isalpha(current_letter)) {
            char output_letter = 'A' <= current_letter && current_letter <= 'Z' ?
            current_letter + ('a' - 'A') : current_letter;

            cout << output_letter;
        }
    }

    cout << endl;
    return 0;
}