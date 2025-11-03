#include <iostream>
#include <string>
using namespace std;

string word;
int N;

int main() {
    // Please write your code here
    cin >> word >> N;

    int word_length = word.length();
    for (int i = word_length - 1; i >= word_length - N; i--) {
        cout << word[i];
    }

    cout << endl;
    
    return 0;
}