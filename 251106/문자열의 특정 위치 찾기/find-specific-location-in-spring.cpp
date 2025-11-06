#include <iostream>
#include <string>
using namespace std;

string letter;
string compare_letter;

int main() {
    // Please write your code here.
    cin >> letter >> compare_letter;
    string output = letter.find(compare_letter) == string::npos ? "No" : to_string(letter.find(compare_letter));
    cout << output;
    return 0;
}