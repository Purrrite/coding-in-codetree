#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    string push_command;

    cin >> word >> push_command;

    int word_len = word.length();
    int push_command_len = push_command.length();

    for (int i = 0; i < push_command_len; i++)
    {
        char left_or_right = push_command[i];
        switch (left_or_right)
        //==========================================//
        {
        case 'L':
        {
            word = word.substr(1) + word.substr(0, 1);
            // cout << word << endl;
            break;
        }
        //==========================================//
        case 'R':
        {
            word = word.substr(word_len - 1, 1) + word.substr(0, word_len - 1);
            // cout << word << endl;
            break;
        }
        //==========================================//
        default:
            break;
        }
    }

    cout << word << endl;

    return 0;
}