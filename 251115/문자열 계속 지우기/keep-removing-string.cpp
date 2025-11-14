#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str, target_str;
    cin >> str >> target_str;

    int target_str_len = target_str.length();
    // const int init_str_len = str.length();

    while (str.find(target_str) != string::npos)
    {
        for (int i = 0; i <= str.length() - target_str_len; i++)
            if (str.substr(i, target_str_len) == target_str)
            {
                // str = str.substr(0, i - 1) + str.substr(target_str_len + i, str.length() - (i + target_str_len));
                str.erase(i, target_str_len);
                break;
            }
    }

    // 1 2 3 4 5 6 7 8 9
    // 4 5

    cout << str << endl;

    return 0;
}