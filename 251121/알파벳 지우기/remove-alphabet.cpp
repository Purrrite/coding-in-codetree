#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string A, B;
    cin >> A >> B;

    string str_A = "";
    string str_B = "";

    for (int i = 0; i < A.length(); i++) 
        if (isdigit(A[i])) 
            str_A += A[i];

    for (int i = 0; i < B.length(); i++) 
        if (isdigit(B[i])) 
            str_B += B[i];

    int int_A = stoi(str_A);
    int int_B = stoi(str_B);

    int output = int_A + int_B;
    cout << output << endl;
    
    return 0;
}