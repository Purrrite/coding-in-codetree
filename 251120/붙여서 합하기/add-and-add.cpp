#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string A, B;
    cin >> A >> B;

    string A_and_B = A + B;
    string B_and_A = B + A;

    int output = stoi(A_and_B) + stoi(B_and_A);
    cout << output << endl;
    return 0;
}