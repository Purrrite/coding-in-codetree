#include <iostream>
#include <string>
using namespace std;

int main() {
    string round_and_round;
    cin >> round_and_round;

    int L = round_and_round.length();

    for (int i = 0; i < L; i++) {
        cout << round_and_round << endl;
        round_and_round = round_and_round.substr(L - 1, 1) +  round_and_round.substr(0, L - 1);
    }

    cout << round_and_round << endl;
    
    return 0;
}