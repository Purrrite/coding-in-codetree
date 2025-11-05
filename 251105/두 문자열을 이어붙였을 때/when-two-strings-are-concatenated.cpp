#include <iostream>
#include <string>
using namespace std;

string A, B;

int main() {
    // Please write your code here.
    cin >> A >> B;
    string output = (A + B == B + A) ? "true" : "false";
    cout << output << endl;

    return 0;
}