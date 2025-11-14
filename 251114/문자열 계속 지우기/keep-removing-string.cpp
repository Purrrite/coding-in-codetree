#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str, target_str;
    cin >> str >> target_str;

    int target_str_len = target_str.length();
    
    while (str.find(target_str) != string::npos) {
        str.erase(str.find(target_str), target_str_len);
    }

    cout << str << endl;
    return 0;
}