#include <iostream>
using namespace std;

int main()
{
    // Please write your code here.
    while (true)
    {
        string str;
        cin >> str;

        if (str == "END")
            break;

        int str_len = str.length();

        for (int i = 0; i < str_len / 2; i++)
        {
            char temp = str[i];
            str[i] = str[str_len - i - 1];
            str[str_len - i - 1] = temp;
        }

        cout << str << endl;
    }
    return 0;
}