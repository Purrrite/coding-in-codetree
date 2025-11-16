#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;

    string output = s.substr(1) + s.substr(0, 1);
    cout << output << endl;
    return 0;
}