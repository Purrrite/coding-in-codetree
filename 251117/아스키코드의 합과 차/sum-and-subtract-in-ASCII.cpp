#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char letter_a, letter_b;
    cin >> letter_a >> letter_b;

    cout << (int)letter_a + letter_b << ' ' << (int)((letter_a > letter_b) ? letter_a - letter_b : letter_b - letter_a);
    
    return 0;
}