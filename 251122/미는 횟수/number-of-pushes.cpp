#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;

    int str_len = A.length(); // A 길이랑 B 길이는 같다고 가정됨.
    int count = -1;

    for (int i = 1; i <= str_len; i++) {
        A = A.substr(str_len - 1, 1) + A.substr(0, str_len - 1);
        if (A == B) {
            count = i;
            break;
        }
    }

    cout << count << endl;

    return 0;
}