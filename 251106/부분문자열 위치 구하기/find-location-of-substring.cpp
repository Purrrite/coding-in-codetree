#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str, compare_str;
    cin >> str >> compare_str;

    int find_index = str.find(compare_str) != string::npos ? str.find(compare_str) : -1; 
    cout << find_index << endl; 
    return 0;
}