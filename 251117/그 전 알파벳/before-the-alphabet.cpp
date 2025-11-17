#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char input;
    cin >> input;
    
    char output = (char)((input - 1 < (int)'a') ? input + (int)'z' - (int)'a' : input - 1);

    cout << output << endl;
    return 0;
}