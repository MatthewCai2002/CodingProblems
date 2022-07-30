#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i < n; i++) {
        int j = n - i;
        if (j % 2 == 0 && i % 2 == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}