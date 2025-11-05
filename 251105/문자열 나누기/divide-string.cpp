#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    vector<string> strnum_arr(N);
    string strnum;

    for (int i = 0; i < N; i++) {
        cin >> strnum_arr[i];
        strnum += strnum_arr[i];
    }

    int count = 1;

    for (int i = 0; strnum[i] != '\0'; i++) {
        cout << strnum[i];
        if (count == 5) {
            cout << endl;
            count = 0;
        }
        count++;
    
    }
    return 0;
}