#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string word;
    cin >> word;

    int word_length = word.length();

    word[1] = 'a';
    word[word_length - 2] = 'a';

    cout << word << endl;
    return 0;
}