#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    // Please write your code here.
    string group_of_player;
    cin >> group_of_player;

    for (char player : group_of_player)
    {
        int is_player = isalpha(player);

        if (is_player)
        {
            int is_weak = islower(player);
            char output_player = is_weak ? toupper(player) : tolower(player);
            cout << output_player;
        }
    }

    cout << endl;
    return 0;
}