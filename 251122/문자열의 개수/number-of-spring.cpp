#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int num = 0;
    vector<string> outputs;

    while (true)
    {
        string str;
        cin >> str;

        if (str == "0") break;
        else num++;

        if (num % 2 != 0) {
            outputs.push_back(str);
        }
    }

    cout << num << endl;

    for (string output : outputs)
        cout << output << endl;

    return 0;
}