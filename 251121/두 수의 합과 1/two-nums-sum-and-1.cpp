#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int A, B;
    cin >> A >> B;
    string sum = to_string(A + B);
    int count = 0;

    for (int i = 0; i < sum.length(); i++) 
        count = sum[i] == '1' ? count + 1 : count;
    
    cout << count << endl;

    return 0;
}