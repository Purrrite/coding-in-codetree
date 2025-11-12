#include <iostream>
#include <string>
using namespace std;

int number_of_question;
int str_len;

void question_1(string& str, int change_a_index, int change_b_index)
{
    char temp = str[change_a_index];
    str[change_a_index] = str[change_b_index];
    str[change_b_index] = temp;

    cout << str << endl;

    return;
}

void question_2(string& str, char victims, char conqueror)
{
    for (int i = 0; i < str_len; i++)
        str[i] = str[i] == victims ? conqueror : str[i];

    cout << str << endl;

    return;
}

int main()
{
    string str;
    cin >> str >> number_of_question;
    str_len = str.length();

    for (int i = 0; i < number_of_question; i++)
    {
        int type_of_question;
        cin >> type_of_question;

        switch (type_of_question)
        {
        case 1:
        {
            int letter_a_index, letter_b_index;
            cin >> letter_a_index >> letter_b_index;
            question_1(str, letter_a_index - 1, letter_b_index - 1);
            break;
        }
        case 2:
        {
            char letter_a, letter_b;
            cin >> letter_a >> letter_b;
            question_2(str, letter_a, letter_b);
            break;
        }
        default:
            break;
        }
    }

    return 0;
}