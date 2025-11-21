#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string A, B;
    cin >> A >> B;

    int i = 0;
    string str_A = "";
    string str_B = "";

    while (isdigit(A[i])) {
        str_A += A[i];
        i++;
    }
    
    i = 0;

    while (isdigit(B[i])) {
        str_B += B[i];
        i++;
    }

    int int_A = stoi(str_A);
    int int_B = stoi(str_B);

    int output = int_A + int_B;
    cout << output << endl;

    return 0;
}