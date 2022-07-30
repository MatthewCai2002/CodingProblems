#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    int inARow = 1;
    char lastChar = str[0];
    for (int i = 1; i < str.length(); i++) {
        if (str[i] == lastChar) {
            inARow++;
        } else {
            inARow = 1;
        }
        if (inARow >= 7) {
            cout << "YES" << endl;
            return 0;
        }
        lastChar = str[i];
    }
    cout << "NO" << endl;
    return 0;
}


