#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    int str_len = str.length();
    // 문자열의 길이는 항상 2보다 크다는 조건이 있음.
    char first_letter = str[0];
    char second_letter = str[1];

    for (int i = 0; i < str_len; i++) 
        str[i] = (str[i] == first_letter) ? second_letter :
        (str[i] == second_letter) ? first_letter :
        str[i];
    
    cout << str << endl;

    return 0;
}