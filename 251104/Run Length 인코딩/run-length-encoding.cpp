#include <iostream>
#include <string>
using namespace std;

string A;
string encodded_A[1000];

int temp_letter_count = 0;
int encodded_A_length = 0;

int main()
{
    cin >> A;
    int A_len = A.length();
    char compare_letter = A[0];

    for (int i = 0; i <= A_len; i++)
    {
        if (compare_letter == A[i])
            temp_letter_count++; // over
        else                     // compare_letter != A[i]
        {
            int length_plus = to_string(temp_letter_count).length();

            encodded_A[encodded_A_length] = compare_letter;
            for (int j = 1; j <= length_plus; j++)
            {
                string str_temp_letter_count = to_string(temp_letter_count);
                encodded_A[encodded_A_length + j] = str_temp_letter_count[j - 1]; //10 -> 0
            }

            encodded_A_length += length_plus + 1;
            compare_letter = A[i];
            temp_letter_count = 1;
        }
    }

    cout << encodded_A_length << endl;

    for (int i = 0; encodded_A[i] != "\0"; i++)
    {
        cout << encodded_A[i];
    }

    return 0;
}