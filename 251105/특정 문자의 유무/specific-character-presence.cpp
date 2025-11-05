#include <iostream>
#include <string>

using namespace std;

char COMPARE_1[] = {'e', 'e'};
char COMPARE_2[] = {'a', 'b'};

int main()
{
    // Please write your code here.
    string input;
    cin >> input;
    int input_length = input.length();
    bool compare_1_exists = false, compare_2_exists = false;

    for (int i = 0; i < input_length - 1; i++)
    {
        if (input[i] == COMPARE_1[0] && input[i + 1] == COMPARE_1[1])
        {
            compare_1_exists = true;
            break;
        }
    }

    for (int i = 0; i < input_length - 1; i++)
    {
        if (input[i] == COMPARE_2[0] && input[i + 1] == COMPARE_2[1])
        {
            compare_2_exists = true;
            break;
        }
    }

    string output_1 = compare_1_exists ? "Yes" : "No";
    string output_2 = compare_2_exists ? "Yes" : "No";

    cout << output_1 << ' ' << output_2 << endl;
    return 0;
}