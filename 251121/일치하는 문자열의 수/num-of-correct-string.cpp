#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string A;
    int n;
    int count = 0;

    cin >> n >> A;

    for (int i = 0; i < n; i++) {
        string comparasion;
        cin >> comparasion;

        // cout << comparasion << endl;
        count = (A == comparasion)? count + 1 : count;
    }

    cout << count << endl;
    return 0;
}