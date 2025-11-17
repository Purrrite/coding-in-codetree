#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char input, output;
    cin >> input;

    if (input - 1 < (int)'a')
        output = input + (int)'z' - (int)'a';
    else 
        output = input - 1;

    cout << output << endl;
    return 0;
}