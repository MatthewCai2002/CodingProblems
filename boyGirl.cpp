#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    string userName;
    cin >> userName;
    unordered_set<char> set;
    for (char c : userName) {
        set.insert(c);
    }
    if (set.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}