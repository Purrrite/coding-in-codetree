#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string A, B;
    cin >> A >> B;

    int A_len = A.length();
    int B_len = B.length();

    int index = 0;
    int count = 0;
    int same_count = 0;
    
    while (A[index + B_len - 1] != '\0') {
        for (int i = 0; i < B_len; i++) {
            if (A[index + i] == B[i]) {
                count++;
            }  
        }

        if (count == B_len)
            same_count++; // same
        
        count = 0;
        index++;
    }

    cout << same_count << endl;
    return 0;
}