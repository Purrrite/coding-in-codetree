#include <iostream>
#include <string>
using namespace std;

string letters;
string output_letters;

int main() {
    // Please write your code here.
    cin >> letters;
    int letter_len = letters.length();

    int count = 0;

    for (int i = 1; i < letter_len; i += 2) {
        output_letters[count] = letters[i];
        count++;
    }

    for (int i = count - 1; i >= 0; i--)
        cout << output_letters[i];
    
    cout << endl;

    return 0;
}