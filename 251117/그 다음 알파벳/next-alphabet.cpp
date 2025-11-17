#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char input;
    cin >> input;

    cout << (char)((input + 1 >= (int)'z') ? 'a' : input + 1) << endl;
    return 0;
}