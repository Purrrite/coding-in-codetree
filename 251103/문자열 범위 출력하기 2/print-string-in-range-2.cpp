#include <iostream>
#include <string>
using namespace std;

string word;
int N;

int main() {
    // Please write your code here
    cin >> word >> N;

    int word_length = word.length();
    int end_index = (word_length - N < 0) ? 0 : word_length - N;
    for (int i = word_length - 1; i >= end_index; i--) {
        cout << word[i];
    }

    cout << endl;
    
    return 0;
}