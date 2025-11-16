#include <iostream>
#include <string>
using namespace std;

string str;
int str_len;
int max_index;

void first_quest();
void secound_quest();
void third_quest();

int main()
{
    int number_of_quest;

    cin >> str >> number_of_quest;
    str_len = str.length();
    max_index = str_len - 1;

    for (int i = 0; i < number_of_quest; i++)
    {
        int type_of_quest;
        cin >> type_of_quest;

        switch (type_of_quest)
        {
        case 1:
        {
            first_quest();
            break;
        }
        case 2:
        {
            secound_quest();
            break;
        }
        case 3:
        {
            third_quest();
            break;
        }
        default:
            break;
        }
    }

    return 0;
}

void first_quest()
{
    str = str.substr(1) + str.substr(0, 1);
    cout << str << endl;
}

void secound_quest()
{
    str = str.substr(max_index, 1) + str.substr(0, str_len - 1);
    cout << str << endl;
}

void third_quest()
{
    char temp;
    for (int i = 0; i < str_len / 2; i++)
    {
        temp = str[i];
        str[i] = str[max_index - i];
        str[max_index - i] = temp;
    }
    cout << str << endl;
}