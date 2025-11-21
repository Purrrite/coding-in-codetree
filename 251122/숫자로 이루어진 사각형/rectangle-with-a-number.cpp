#include <iostream>
using namespace std;



void print(int num) {
    int count = 1;

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            cout << count << ' ';
            count = (count >= 9) ? 1 : count + 1;
        }
        cout << endl;
    }
}

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    print(N);

    return 0;
}